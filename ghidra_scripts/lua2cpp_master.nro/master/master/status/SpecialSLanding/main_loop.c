
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialSLanding_main_loop(L2CFighterMaster *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *this_00;
  ulong uVar7;
  float fVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
LAB_710003038c:
    bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    cVar1 = (char)&stack0xfffffffffffffff0;
    if ((bVar4 & 1U) == 0) {
      this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(this_00,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_MASTER_STATUS_SPECIAL_S_FLAG_CHANGE_LANDING_MOTION_RATE);
        iVar5 = lib::L2CValue::as_integer(aLStack80);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar4 & 1U) != 0) {
          bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((bVar4 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack64,1.0);
            fVar8 = (float)lib::L2CValue::as_number(aLStack64);
            app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar8);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::L2CValue
                      (aLStack64,_FIGHTER_MASTER_STATUS_SPECIAL_S_FLAG_CHANGE_LANDING_MOTION_RATE);
            iVar5 = lib::L2CValue::as_integer(aLStack64);
            app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
            lib::L2CValue::_L2CValue(aLStack64);
          }
        }
        fVar8 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,fVar8);
        lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack160,0x1a4b4bf5b2);
        uVar6 = lib::L2CValue::as_integer(aLStack144);
        uVar7 = lib::L2CValue::as_integer(aLStack160);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack128,fVar8);
        lib::L2CValue::L2CValue(aLStack64,1.0);
        lib::L2CValue::operator_(aLStack128,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_GENERATE_ARTICLE_SPEAR);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          bVar3 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((bVar4 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MASTER_GENERATE_ARTICLE_SPEAR);
            iVar5 = lib::L2CValue::as_integer(aLStack64);
            app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar5,0);
            lib::L2CValue::_L2CValue(aLStack64);
          }
          lib::L2CValue::L2CValue
                    (aLStack64,_FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_SWORD_REQ_EFFECT_AURA);
          iVar5 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
          lVar2 = -0x30;
          goto LAB_71000306c0;
        }
        goto LAB_71000306c4;
      }
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40));
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40));
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    iVar5 = 1;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lVar2 = -0x40;
LAB_71000306c0:
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) goto LAB_710003038c;
    }
LAB_71000306c4:
    iVar5 = 0;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

