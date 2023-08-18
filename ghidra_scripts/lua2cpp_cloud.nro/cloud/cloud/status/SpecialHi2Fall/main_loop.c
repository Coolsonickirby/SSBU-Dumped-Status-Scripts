
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCloud::status::SpecialHi2Fall_main_loop(L2CFighterCloud *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  FUN_710001cd60();
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) == 0) {
    lua2cpp::L2CFighterCommon::sub_fall(this);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING_FALL_SPECIAL);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0);
          HVar6 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack128,HVar6);
          lib::L2CValue::L2CValue(aLStack96,0xf65f0c14a);
          uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_CLOUD_STATUS_KIND_SPECIAL_HI2_LANDING);
            lib::L2CValue::operator_(aLStack112,aLStack96);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
            lib::L2CValue::operator_(aLStack112,aLStack96);
          }
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,aLStack112);
          lib::L2CValue::L2CValue(aLStack128,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          lib::L2CValue::_L2CValue(aLStack112);
          return;
        }
      }
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_CLOUD_STATUS_SPECIAL_HI2_INT_FALL_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::L2CValue(aLStack96,0);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        HVar6 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack112,HVar6);
        lib::L2CValue::L2CValue(aLStack96,0x10d15af86a);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_FALL_SPECIAL);
            lib::L2CValue::L2CValue(aLStack112,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack96);
            goto LAB_710001c890;
          }
        }
        else {
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
          lib::L2CValue::L2CValue(aLStack96,false);
          uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack96,0xf65f0c14a);
            lib::L2CValue::L2CValue(aLStack112,0);
            lib::L2CValue::L2CValue(aLStack128,1.0);
            lib::L2CValue::L2CValue(aLStack144,false);
            HVar6 = lib::L2CValue::as_hash(aLStack96);
            fVar7 = (float)lib::L2CValue::as_number(aLStack112);
            fVar8 = (float)lib::L2CValue::as_number(aLStack128);
            bVar2 = lib::L2CValue::as_bool(aLStack144);
            app::lua_bind::MotionModule__change_motion_impl
                      (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar2 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack96);
          }
        }
      }
      iVar3 = 0;
      goto LAB_710001c898;
    }
  }
LAB_710001c890:
  iVar3 = 1;
LAB_710001c898:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

