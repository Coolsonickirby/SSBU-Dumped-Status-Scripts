
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSonic::status::SpecialLwHold_main_loop(L2CFighterSonic *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar7 & 1) == 0) {
LAB_7100013f20:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
    uVar7 = lib::L2CValue::operator__(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) != 0) {
      bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      if ((bVar2 & 1U) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        uVar7 = lib::L2CValue::operator__(pLVar6,pLVar8);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar7 & 1) != 0) goto LAB_710001435c;
      }
      else {
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_SONIC_SPECIAL_AIR_LW);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
      GVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      HVar9 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack112,HVar9);
      lib::L2CValue::L2CValue(aLStack144,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      lVar10 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack128,lVar10);
      uVar7 = lib::L2CValue::operator__(aLStack112,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        lVar10 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,lVar10);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        lib::L2CValue::L2CValue(aLStack160,1.0);
        lib::L2CValue::L2CValue(aLStack176,false);
        HVar9 = lib::L2CValue::as_hash(aLStack112);
        fVar13 = (float)lib::L2CValue::as_number(aLStack144);
        fVar12 = (float)lib::L2CValue::as_number(aLStack160);
        bVar1 = lib::L2CValue::as_bool(aLStack176);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar9,fVar13,fVar12,(bool)(bVar1 & 1),0.0,false,false);
        goto LAB_7100014334;
      }
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      lVar10 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,lVar10);
      HVar9 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (this->moduleAccessor,HVar9,-1.0,1.0,0.0,false,false);
      goto LAB_710001434c;
    }
  }
  else {
    bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if ((bVar2 & 1U) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      uVar7 = lib::L2CValue::operator__(pLVar6,pLVar8);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) != 0) goto LAB_7100013f20;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    HVar9 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,HVar9);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    lVar10 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,lVar10);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      lVar10 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,lVar10);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar9 = lib::L2CValue::as_hash(aLStack112);
      fVar13 = (float)lib::L2CValue::as_number(aLStack144);
      fVar12 = (float)lib::L2CValue::as_number(aLStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar9,fVar13,fVar12,(bool)(bVar1 & 1),0.0,false,false);
LAB_7100014334:
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      lVar10 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,lVar10);
      HVar9 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (this->moduleAccessor,HVar9,-1.0,1.0,0.0,false,false);
    }
LAB_710001434c:
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
LAB_710001435c:
  lib::L2CValue::L2CValue(aLStack128,false);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
  lib::L2CValue::L2CValue(aLStack144,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack160,0xd87461d6d);
  uVar7 = lib::L2CValue::as_integer(aLStack144);
  uVar11 = lib::L2CValue::as_integer(aLStack160);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar7,uVar11)
  ;
  lib::L2CValue::L2CValue(aLStack112,fVar13);
  uVar7 = lib::L2CValue::operator_(aLStack112,pLVar6);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,true);
    lib::L2CValue::operator_(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack160,0x1b6b05bb4d);
  uVar7 = lib::L2CValue::as_integer(aLStack144);
  uVar11 = lib::L2CValue::as_integer(aLStack160);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar11);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  uVar7 = lib::L2CValue::operator__(aLStack112,pLVar6);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,true);
    lib::L2CValue::operator_(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_SONIC_STATUS_KIND_SPECIAL_S_DASH);
    lib::L2CValue::L2CValue(aLStack208,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100014c70;
  }
  FUN_7100015020(aLStack112,this);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100014c70;
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SONIC_STATUS_SPECIAL_LW_HOLD_WORK_FLOAT_ROT_SPEED);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar13);
  lib::L2CValue::L2CValue(aLStack176,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack224,0x18a4945a98);
  uVar7 = lib::L2CValue::as_integer(aLStack176);
  uVar11 = lib::L2CValue::as_integer(aLStack224);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar7,uVar11)
  ;
  lib::L2CValue::L2CValue(aLStack160,fVar13);
  uVar7 = lib::L2CValue::operator__(aLStack112,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_SONIC_STATUS_KIND_SPECIAL_LW_END);
    lib::L2CValue::L2CValue(aLStack256,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100014c70;
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SONIC_STATUS_SPECIAL_LW_HOLD_WORK_INT_CHARGE_LEVEL);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_SONIC_STATUS_SPECIAL_LW_HOLD_WORK_FLOAT_ROT_SPEED);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar13);
  lib::L2CValue::L2CValue(aLStack272,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack288,0x1aa46fb426);
  uVar7 = lib::L2CValue::as_integer(aLStack272);
  uVar11 = lib::L2CValue::as_integer(aLStack288);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar7,uVar11)
  ;
  lib::L2CValue::L2CValue(aLStack224,fVar13);
  lib::L2CValue::operator_(aLStack112,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack224,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack272,0x18daf4cac2);
  uVar7 = lib::L2CValue::as_integer(aLStack224);
  uVar11 = lib::L2CValue::as_integer(aLStack272);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar7,uVar11)
  ;
  lib::L2CValue::L2CValue(aLStack112,fVar13);
  lib::L2CValue::L2CValue(aLStack304,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack320,0x1aa46fb426);
  uVar7 = lib::L2CValue::as_integer(aLStack304);
  uVar11 = lib::L2CValue::as_integer(aLStack320);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar7,uVar11)
  ;
  lib::L2CValue::L2CValue(aLStack288,fVar13);
  lib::L2CValue::operator_(aLStack112,aLStack288);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::operator_(aLStack160,aLStack176);
  lib::L2CValue::L2CValue(aLStack112,0);
  uVar7 = lib::L2CValue::operator__(aLStack144,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,1);
    uVar7 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0.66);
      uVar7 = lib::L2CValue::operator__(aLStack224,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) goto LAB_7100014c44;
      FUN_71000156a0(this);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ANIMCMD_EFFECT);
      lib::L2CValue::L2CValue(aLStack272,0x204be4482f);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      HVar9 = lib::L2CValue::as_hash(aLStack272);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                (this->moduleAccessor,iVar3,HVar9,-1);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,1);
      lib::L2CValue::operator_(aLStack144,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_SONIC_STATUS_SPECIAL_LW_HOLD_WORK_INT_CHARGE_LEVEL);
      iVar3 = lib::L2CValue::as_integer(aLStack272);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0.66);
      uVar7 = lib::L2CValue::operator_(aLStack112,aLStack224);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0.33);
        uVar7 = lib::L2CValue::operator__(aLStack224,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar7 & 1) == 0) goto LAB_7100014c44;
        FUN_71000156a0(this);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ANIMCMD_EFFECT);
        lib::L2CValue::L2CValue(aLStack272,0x1c2f32b79c);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        HVar9 = lib::L2CValue::as_hash(aLStack272);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                  (this->moduleAccessor,iVar3,HVar9,-1);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,1);
        lib::L2CValue::operator_(aLStack144,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_SONIC_STATUS_SPECIAL_LW_HOLD_WORK_INT_CHARGE_LEVEL);
        iVar3 = lib::L2CValue::as_integer(aLStack272);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
      }
      else {
        FUN_71000156a0(this);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ANIMCMD_EFFECT);
        lib::L2CValue::L2CValue(aLStack272,0x1cb1514ffb);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        HVar9 = lib::L2CValue::as_hash(aLStack272);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                  (this->moduleAccessor,iVar3,HVar9,-1);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,1);
        lib::L2CValue::operator_(aLStack144,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_SONIC_STATUS_SPECIAL_LW_HOLD_WORK_INT_CHARGE_LEVEL);
        iVar3 = lib::L2CValue::as_integer(aLStack272);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
      }
    }
LAB_7100014c34:
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack272);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0.33);
    uVar7 = lib::L2CValue::operator_(aLStack112,aLStack224);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) != 0) {
      FUN_71000156a0(this);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ANIMCMD_EFFECT);
      lib::L2CValue::L2CValue(aLStack272,0x204be4482f);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      HVar9 = lib::L2CValue::as_hash(aLStack272);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                (this->moduleAccessor,iVar3,HVar9,-1);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,1);
      lib::L2CValue::operator_(aLStack144,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_SONIC_STATUS_SPECIAL_LW_HOLD_WORK_INT_CHARGE_LEVEL);
      iVar3 = lib::L2CValue::as_integer(aLStack272);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
      goto LAB_7100014c34;
    }
  }
LAB_7100014c44:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
LAB_7100014c70:
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

