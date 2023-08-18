
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponElementDiver::status::FinalAttack_main_loop
          (L2CWeaponElementDiver *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  long lVar7;
  Weapon *pWVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar6 = lib::L2CValue::operator_(aLStack80,pLVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      goto LAB_7100002f74;
    }
  }
  lib::L2CValue::L2CValue
            (aLStack80,_WEAPON_ELEMENT_DIVER_INSTANCE_WORK_ID_INT_MOTION_KIND_FINAL_ATTACK);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  lVar7 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,lVar7);
  lib::L2CValue::L2CValue
            (aLStack144,_WEAPON_ELEMENT_DIVER_INSTANCE_WORK_ID_INT_MOTION_KIND_FINAL_AIR_ATTACK);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  lVar7 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,lVar7);
  FUN_7100003040(aLStack96,this,aLStack112,aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar6 = lib::L2CValue::operator_(aLStack80,pLVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_GROUND_CORRECT_KIND_AIR);
      GVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_GROUND_CORRECT_KIND_GROUND);
      GVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
    }
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue
            (aLStack160,_WEAPON_ELEMENT_DIVER_INSTANCE_WORK_ID_FLAG_FINAL_ATTACK_DETACH);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack80,_WEAPON_ELEMENT_DIVER_INSTANCE_WORK_ID_FLAG_FINAL_ATTACK_DETACH);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
    pWVar8 = (Weapon *)lib::L2CValue::as_pointer(pLVar5);
    app::WeaponSpecializer_ElementDiver::remove_constraint(pWVar8);
  }
LAB_7100002f74:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

