
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CWeaponMasterSword::status::Extend_exec(long this)

{
  int iVar1;
  ulong uVar2;
  L2CValue *return_value;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_MASTER_SWORD_STATUS_EXTEND_INT_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(this + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_PH2NDARY_CRAW_COLLIDE);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::PhysicsModule__set_2nd_status_impl
              (*(BattleObjectModuleAccessor **)(this + 0x40),iVar1);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(return_value,0);
  return;
}

