
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRidley::status::SpecialSDragCliff_main_loop(L2CFighterRidley *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  L2CValue *in_x2;
  undefined8 uVar10;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,5.0);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_RIDLEY_STATUS_SPECIAL_S_FLAG_REVERT_DEGREE);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)auStack176,false);
  uVar7 = lib::L2CValue::operator__(aLStack128,(L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,aLStack96);
    lib::L2CValue::L2CValue(aLStack144,aLStack112);
    FUN_710001e510(this,aLStack128,aLStack144);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack192,GROUND_TOUCH_FLAG_DOWN);
    uVar4 = lib::L2CValue::as_integer(aLStack192);
    uVar10 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,(float)uVar10);
    pLVar8 = (L2CValue *)(auStack176 + 0x10);
    lib::L2CValue::L2CValue(pLVar8,(float)((ulong)uVar10 >> 0x20));
    lib::L2CValue::operator_(aLStack128,(L2CValue *)auStack176);
    lib::L2CValue::operator_(aLStack144,pLVar8);
    lib::L2CValue::_L2CValue(pLVar8);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    pLVar8 = aLStack144;
    lib::L2CAgent::math_atan((L2CAgent *)aLStack128,pLVar8,in_x2);
    lib::L2CAgent::math_deg((L2CAgent *)auStack176,pLVar8);
    lib::L2CValue::operator_(aLStack96,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,aLStack96);
    lib::L2CValue::L2CValue(aLStack208,aLStack112);
    FUN_710001e510(this,aLStack192,aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_RIDLEY_STATUS_SPECIAL_S_FLAG_THROW);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)auStack176,true);
  uVar7 = lib::L2CValue::operator__(aLStack224,(L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack176,_FIGHTER_RIDLEY_STATUS_SPECIAL_S_FLAG_THROW);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack176);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,LINK_NO_CAPTURE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack176);
    uVar4 = app::lua_bind::LinkModule__get_node_object_id_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack224,uVar4);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    app::LinkEventThrow::new_l2c_table();
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x105a79305b);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,0x54f934137);
    lib::L2CValue::operator_(pLVar8,(L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0xc3e3c1ede);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,0x7fb997a80);
    lib::L2CValue::operator_(pLVar8,(L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,LINK_NO_CAPTURE);
    FUN_710001cf10(aLStack256,this,auStack176,aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,0x50000000);
    uVar7 = lib::L2CValue::operator__(aLStack224,(L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack176,_FIGHTER_ATTACK_ABSOLUTE_KIND_THROW);
      lib::L2CValue::L2CValue(aLStack272,0x54f934137);
      lib::L2CValue::L2CValue(aLStack288,0);
      lib::L2CValue::L2CValue(aLStack304,0);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack176);
      uVar4 = lib::L2CValue::as_integer(aLStack224);
      HVar9 = lib::L2CValue::as_hash(aLStack272);
      iVar5 = lib::L2CValue::as_integer(aLStack288);
      iVar6 = lib::L2CValue::as_integer(aLStack304);
      app::lua_bind::AttackModule__hit_absolute_joint_impl
                (this->moduleAccessor,iVar3,uVar4,HVar9,iVar5,iVar6);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    }
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)auStack176,true);
  uVar7 = lib::L2CValue::operator__(aLStack224,(L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack224);
LAB_710001e164:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)auStack176);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack176,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack224,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x20);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue((L2CValue *)auStack176);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)auStack176,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack224,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x20);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue((L2CValue *)auStack176);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack272,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0xf0);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,false);
    uVar7 = lib::L2CValue::operator__(aLStack240,(L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack224);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,false);
      uVar7 = lib::L2CValue::operator__(aLStack288,(L2CValue *)auStack176);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((uVar7 & 1) != 0) goto LAB_710001e164;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

