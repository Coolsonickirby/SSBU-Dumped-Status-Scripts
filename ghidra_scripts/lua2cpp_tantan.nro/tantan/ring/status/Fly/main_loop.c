
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponTantanRing::status::Fly_main_loop(L2CWeaponTantanRing *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  BattleObjectModuleAccessor *pBVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_LINK_NO_ARTICLE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    FUN_710008d610(this);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_LINK_NO_ARTICLE);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    uVar3 = app::lua_bind::LinkModule__get_parent_id_impl(this->moduleAccessor,iVar2,true);
    lib::L2CValue::L2CValue(aLStack80,uVar3);
    lib::L2CValue::_L2CValue(aLStack64);
    uVar3 = lib::L2CValue::as_integer(aLStack80);
    pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar3);
    if (pvVar5 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack96,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,pvVar5);
    }
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACH_RING);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(pBVar6,iVar2);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar4 & 1) != 0) {
      FUN_710008d610(this);
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  return;
}

