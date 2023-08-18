
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRockmanRockmanx::status::Scene01_main_loop
          (L2CWeaponRockmanRockmanx *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  long lVar5;
  long lVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_ROCKMAN_ROCKMANX_INSTANCE_WORK_ID_FLAG_VISIBILITY_CHANGE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue(aLStack64,80.0);
    uVar3 = lib::L2CValue::operator__(aLStack64,pLVar4);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,0x4bf28cd64);
      lib::L2CValue::L2CValue(aLStack80,0xb05a032cb);
      lVar5 = lib::L2CValue::as_integer(aLStack64);
      lVar6 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar5,lVar6);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue
                (aLStack64,_WEAPON_ROCKMAN_ROCKMANX_INSTANCE_WORK_ID_FLAG_VISIBILITY_CHANGE);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

