
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopag::status::SpecialHiA_main_loop(L2CFighterKoopag *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100015494;
  }
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack160);
LAB_71000153a8:
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) {
      this_00 = &this->globalTable;
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
      lib::L2CValue::L2CValue(aLStack80,1.0);
      uVar4 = lib::L2CValue::operator_(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack160,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack176,0x2309e38f9a);
          uVar4 = lib::L2CValue::as_integer(aLStack160);
          uVar6 = lib::L2CValue::as_integer(aLStack176);
          fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar4,uVar6);
          lib::L2CValue::L2CValue(aLStack80,fVar7);
          lib::L2CValue::operator_(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::L2CValue(aLStack160,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack176,0x21ffdf64e1);
          uVar4 = lib::L2CValue::as_integer(aLStack160);
          uVar6 = lib::L2CValue::as_integer(aLStack176);
          fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar4,uVar6);
          lib::L2CValue::L2CValue(aLStack80,fVar7);
          lib::L2CValue::operator_(aLStack128,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
          uVar4 = lib::L2CValue::operator__(aLStack96,pLVar5);
          if ((uVar4 & 1) != 0) {
            pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
            uVar4 = lib::L2CValue::operator__(pLVar5,aLStack128);
            if ((uVar4 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack160,CONTROL_PAD_BUTTON_SPECIAL);
              iVar3 = lib::L2CValue::as_integer(aLStack160);
              bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl
                                (this->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
              bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack160);
              if ((bVar1 & 1U) != 0) {
                lib::L2CValue::L2CValue(aLStack160,0x1086bc4a93);
                lib::L2CValue::L2CValue(aLStack176,0x17de47d138);
                uVar4 = lib::L2CValue::as_integer(aLStack160);
                uVar6 = lib::L2CValue::as_integer(aLStack176);
                fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                         (this->moduleAccessor,uVar4,uVar6);
                lib::L2CValue::L2CValue(aLStack80,fVar7);
                lib::L2CValue::operator_(aLStack144,aLStack80);
                lib::L2CValue::_L2CValue(aLStack80);
                lib::L2CValue::_L2CValue(aLStack176);
                lib::L2CValue::_L2CValue(aLStack160);
                pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
                lib::L2CValue::L2CValue
                          (aLStack176,_FIGHTER_KOOPA_STATUS_SPECIAL_HI_WORK_FLOAT_JUMP_RESTART_FRAME
                          );
                iVar3 = lib::L2CValue::as_integer(aLStack176);
                fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3)
                ;
                lib::L2CValue::L2CValue(aLStack160,fVar7);
                lib::L2CValue::operator_(pLVar5,aLStack160);
                lib::L2CValue::operator_(aLStack112,aLStack80);
                lib::L2CValue::_L2CValue(aLStack80);
                lib::L2CValue::_L2CValue(aLStack160);
                lib::L2CValue::_L2CValue(aLStack176);
                lib::L2CValue::L2CValue(aLStack160,0x1086bc4a93);
                lib::L2CValue::L2CValue(aLStack176,0x293edc5fdc);
                uVar4 = lib::L2CValue::as_integer(aLStack160);
                uVar6 = lib::L2CValue::as_integer(aLStack176);
                fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                         (this->moduleAccessor,uVar4,uVar6);
                lib::L2CValue::L2CValue(aLStack80,fVar7);
                uVar4 = lib::L2CValue::operator_(aLStack80,aLStack112);
                lib::L2CValue::_L2CValue(aLStack80);
                lib::L2CValue::_L2CValue(aLStack176);
                lib::L2CValue::_L2CValue(aLStack160);
                if ((uVar4 & 1) != 0) {
                  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
                  lib::L2CValue::L2CValue(aLStack80,0.0);
                  lib::L2CValue::operator_(pLVar5,aLStack80);
                  lib::L2CValue::_L2CValue(aLStack80);
                  lib::L2CValue::L2CValue
                            (aLStack80,
                             _FIGHTER_KOOPA_STATUS_SPECIAL_HI_WORK_FLOAT_JUMP_RESTART_FRAME);
                  fVar7 = (float)lib::L2CValue::as_number(aLStack160);
                  iVar3 = lib::L2CValue::as_integer(aLStack80);
                  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
                  lib::L2CValue::_L2CValue(aLStack80);
                  lib::L2CValue::_L2CValue(aLStack160);
                  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
                  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
                  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
                  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
                  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
                  lib::L2CValue::_L2CValue(aLStack80);
                }
              }
            }
          }
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
          lib::L2CValue::L2CValue(aLStack160,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FALL_SPECIAL);
      lib::L2CValue::L2CValue(aLStack160,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x40);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack176,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack160);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack208,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar4 & 1) != 0) goto LAB_71000153a8;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
LAB_7100015494:
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

