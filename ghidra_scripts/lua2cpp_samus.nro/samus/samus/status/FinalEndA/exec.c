
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSamus::status::FinalEndA_exec(L2CFighterSamus *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  undefined auStack272 [32];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SAMUS_STATUS_KIND_FINAL_START_G);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SAMUS_STATUS_KIND_FINAL_LOOP_G);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) goto LAB_7100007390;
  }
  else {
LAB_7100007390:
    app::lua_bind::KineticModule__clear_speed_all_impl(this->moduleAccessor);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SAMUS_STATUS_KIND_FINAL_LOOP_G);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SAMUS_STATUS_KIND_FINAL_LOOP_A);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) goto LAB_7100007408;
  }
  else {
LAB_7100007408:
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_LASER_C);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_LASER_C);
    iVar2 = lib::L2CValue::as_integer(aLStack192);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack176,iVar2);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar5 = lib::L2CValue::operator__(aLStack176,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar5 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SAMUS_STATUS_KIND_FINAL_END_G);
        lib::L2CValue::L2CValue(aLStack176,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x50);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SAMUS_STATUS_KIND_FINAL_END_A);
        lib::L2CValue::L2CValue(aLStack176,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x50);
      }
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100007cac;
    }
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_FINAL_LASER_ANG);
    iVar2 = lib::L2CValue::as_integer(aLStack176);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    lib::L2CValue::operator_(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack176);
    fVar8 = (float)app::lua_bind::ControlModule__get_stick_y_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    pLVar4 = aLStack96;
    lib::L2CValue::operator_(aLStack144,pLVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack144,pLVar4);
    lib::L2CValue::L2CValue(aLStack96,0.5);
    uVar5 = lib::L2CValue::operator_(aLStack96,aLStack176);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack224,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack240,0x1351db8d4e);
      uVar5 = lib::L2CValue::as_integer(aLStack224);
      uVar6 = lib::L2CValue::as_integer(aLStack240);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack208,fVar8);
      lib::L2CValue::operator_(aLStack208,aLStack144);
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),fVar8);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)(auStack272 + 0x10));
      lib::L2CValue::operator_(aLStack128,aLStack176);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack176,aLStack128);
      lib::L2CValue::L2CValue(aLStack224,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack240,0x1300bb7c6b);
      uVar5 = lib::L2CValue::as_integer(aLStack224);
      uVar6 = lib::L2CValue::as_integer(aLStack240);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack208,fVar8);
      lib::L2CValue::operator_(aLStack208);
      lib::L2CValue::L2CValue((L2CValue *)auStack272,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack288,0x1300bb7c6b);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack272);
      uVar6 = lib::L2CValue::as_integer(aLStack288);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),fVar8);
      lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x0);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue((L2CValue *)auStack272);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_FINAL_LASER_ANG);
      fVar8 = (float)lib::L2CValue::as_number(aLStack208);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar2);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack208);
    }
    lib::L2CValue::L2CValue(aLStack224,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack240,0x1300bb7c6b);
    uVar5 = lib::L2CValue::as_integer(aLStack224);
    uVar6 = lib::L2CValue::as_integer(aLStack240);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack208,fVar8);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar5 = lib::L2CValue::operator_(aLStack96,aLStack208);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_MOT2ND);
      iVar2 = lib::L2CValue::as_integer(aLStack208);
      iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack96,iVar2);
      lib::L2CValue::operator_(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue(aLStack96,0);
      lib::L2CValue::operator_(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack208,fVar8);
      lib::L2CValue::operator_(aLStack128,aLStack208);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack208);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SAMUS_STATUS_KIND_FINAL_LOOP_G);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0.0);
        uVar5 = lib::L2CValue::operator_(aLStack96,aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0xb05cf1a1d);
          lib::L2CValue::operator_(aLStack112,aLStack96);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0xb6f7f3aef);
          lib::L2CValue::operator_(aLStack112,aLStack96);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0.0);
        uVar5 = lib::L2CValue::operator_(aLStack96,aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0x7c95877e7);
          lib::L2CValue::operator_(aLStack112,aLStack96);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0x7a3e85715);
          lib::L2CValue::operator_(aLStack112,aLStack96);
        }
      }
      lib::L2CValue::_L2CValue(aLStack96);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack160);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,1.0);
        fVar8 = (float)lib::L2CValue::as_number(aLStack96);
        app::lua_bind::MotionModule__set_weight_impl(this->moduleAccessor,fVar8,true);
        lib::L2CValue::_L2CValue(aLStack96);
        fVar8 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack96,fVar8);
        lib::L2CValue::L2CValue(aLStack208,1.0);
        lib::L2CValue::L2CValue(aLStack224,false);
        HVar7 = lib::L2CValue::as_hash(aLStack112);
        fVar8 = (float)lib::L2CValue::as_number(aLStack96);
        fVar9 = (float)lib::L2CValue::as_number(aLStack208);
        bVar1 = lib::L2CValue::as_bool(aLStack224);
        app::lua_bind::MotionModule__add_motion_2nd_impl
                  (this->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar1 & 1),1.0);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_MOT2ND);
        iVar2 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack304,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack320,0x1300bb7c6b);
      uVar5 = lib::L2CValue::as_integer(aLStack304);
      uVar6 = lib::L2CValue::as_integer(aLStack320);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack288,fVar8);
      pLVar4 = aLStack288;
      lib::L2CValue::operator_(aLStack128,pLVar4);
      lib::L2CAgent::math_abs((L2CAgent *)auStack272,pLVar4);
      lib::L2CValue::L2CValue(aLStack96,0.5);
      lib::L2CValue::operator_(aLStack240,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,1.0);
      lib::L2CValue::operator_(aLStack96,aLStack224);
      lib::L2CValue::_L2CValue(aLStack96);
      fVar8 = (float)lib::L2CValue::as_number(aLStack208);
      app::lua_bind::MotionModule__set_weight_impl(this->moduleAccessor,fVar8,true);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)auStack272);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100007cac:
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

