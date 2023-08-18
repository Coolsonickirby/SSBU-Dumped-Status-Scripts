
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGaogaen::status::SpecialHi_main_loop(L2CFighterGaogaen *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CAgent *this_00;
  L2CValue *pLVar6;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
LAB_710001d09c:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_FLAG_REVERSE_LR);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack96,0x278f3f1306);
        uVar4 = lib::L2CValue::as_integer(aLStack64);
        uVar5 = lib::L2CValue::as_integer(aLStack96);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack80,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack64);
        fVar7 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack96,fVar7);
        lib::L2CValue::L2CValue(aLStack64,0.0);
        lib::L2CValue::operator_(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        uVar4 = lib::L2CValue::operator_(aLStack96,aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) != 0) {
          pLVar6 = (L2CValue *)0x1a;
          this_00 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
          lib::L2CAgent::math_abs(this_00,pLVar6);
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_STATUS_SUPER_JUMP_PUNCH_WORK_FLOAT_CONST_LR_STICK_X);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack96,fVar7);
          uVar4 = lib::L2CValue::operator_(aLStack96,aLStack64);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((uVar4 & 1) != 0) {
            bVar1 = app::lua_bind::PostureModule__set_stick_lr_impl(this->moduleAccessor,0.0);
            lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
            lib::L2CValue::_L2CValue(aLStack64);
            app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_FLAG_REVERSE_LR);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::_L2CValue(aLStack96);
          }
        }
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lua2cpp::L2CFighterCommon::super_jump_punch_main(this);
      FUN_710001a8c0(this);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAOGAEN_STATUS_KIND_SPECIAL_HI_TURN);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
    }
    iVar3 = 0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) goto LAB_710001d09c;
    }
    iVar3 = 1;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

