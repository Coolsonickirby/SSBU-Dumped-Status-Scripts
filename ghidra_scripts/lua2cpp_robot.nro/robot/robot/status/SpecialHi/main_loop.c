
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRobot::status::SpecialHi_main_loop(L2CFighterRobot *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_TRANSFORM_COMP);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROBOT_PARTIAL_ANIM_NO_BURNER_PARTS);
        lib::L2CValue::L2CValue(aLStack128,0xfe89a4513);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        lib::L2CValue::L2CValue(aLStack160,1.0);
        lib::L2CValue::L2CValue(aLStack176,false);
        lib::L2CValue::L2CValue(aLStack192,false);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        lib::L2CValue::L2CValue(aLStack224,false);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        HVar6 = lib::L2CValue::as_hash(aLStack128);
        fVar7 = (float)lib::L2CValue::as_number(aLStack144);
        fVar8 = (float)lib::L2CValue::as_number(aLStack160);
        bVar2 = lib::L2CValue::as_bool(aLStack176);
        bVar3 = lib::L2CValue::as_bool(aLStack192);
        fVar9 = (float)lib::L2CValue::as_number(aLStack208);
        bVar4 = lib::L2CValue::as_bool(aLStack224);
        app::lua_bind::MotionModule__add_motion_partial_impl
                  (this->moduleAccessor,iVar5,HVar6,fVar7,fVar8,(bool)(bVar2 & 1),(bool)(bVar3 & 1),
                   fVar9,(bool)(bVar4 & 1),true,false);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_TRANSFORM_COMP);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLAG_BURNER_TRANSFORM_COMP);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      iVar5 = 0;
      goto LAB_710001a90c;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROBOT_STATUS_KIND_SPECIAL_HI_KEEP);
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  iVar5 = 1;
LAB_710001a90c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

