
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponYounglinkBoomerang::status::Haved_exec
          (L2CWeaponYounglinkBoomerang *this,L2CValue *return_value)

{
  uint uVar1;
  int iVar2;
  L2CValue *this_00;
  Weapon *pWVar3;
  void *pvVar4;
  BattleObjectModuleAccessor *pBVar5;
  Hash40 HVar6;
  ulong uVar7;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pWVar3 = (Weapon *)lib::L2CValue::as_pointer(this_00);
  uVar1 = app::lua_bind::Weapon__get_founder_id_impl(pWVar3);
  lib::L2CValue::L2CValue(aLStack80,uVar1);
  uVar1 = lib::L2CValue::as_integer(aLStack80);
  pvVar4 = (void *)app::sv_battle_object::module_accessor(uVar1);
  if (pvVar4 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,pvVar4);
  }
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
  HVar6 = app::lua_bind::MotionModule__motion_kind_impl(pBVar5);
  lib::L2CValue::L2CValue(aLStack112,HVar6);
  lib::L2CValue::L2CValue(aLStack64,0xae47766c9);
  uVar7 = lib::L2CValue::operator__(aLStack112,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xa7d7e3773);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0xe14250c5d);
      uVar7 = lib::L2CValue::operator__(aLStack112,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0xe8d2c5de7);
        uVar7 = lib::L2CValue::operator__(aLStack112,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_WN_LINK_BOOMERANG_INSTANCE_WORK_ID_FLAG_REMOVE_SELF);
          iVar2 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
          lib::L2CValue::_L2CValue(aLStack64);
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

