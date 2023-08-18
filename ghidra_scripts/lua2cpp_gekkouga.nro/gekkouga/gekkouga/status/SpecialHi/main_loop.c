
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::SpecialHi_main_loop(L2CFighterGekkouga *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  undefined8 *puVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  long lVar15;
  undefined8 uVar16;
  undefined local_1b0 [32];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  undefined auStack368 [16];
  undefined auStack352 [16];
  undefined auStack336 [32];
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
  undefined8 local_70;
  lua_State *plStack104;
  
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue(aLStack304,0);
  ppBVar11 = &this->moduleAccessor;
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
  lib::L2CValue::L2CValue((L2CValue *)local_1b0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_1b0);
  lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_1b0,_FIGHTER_GEKKOUGA_STATUS_KIND_SPECIAL_HI_LOOP);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710002a378;
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_INT_QUICK_FRAME_COUNT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)local_1b0,iVar3);
  lib::L2CValue::operator_(aLStack272,(L2CValue *)local_1b0);
  lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),0x11f45f473e);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack336 + 0x10));
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)local_1b0,iVar3);
  lib::L2CValue::operator_(aLStack256,(L2CValue *)local_1b0);
  lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack336 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  uVar4 = lib::L2CValue::operator__(aLStack272,aLStack256);
  if ((uVar4 & 1) == 0) {
    uVar4 = lib::L2CValue::operator_(aLStack256,aLStack272);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),0x31d39a761);
      lib::L2CValue::L2CValue((L2CValue *)auStack336,0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack352,0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack368,0.0);
      HVar6 = lib::L2CValue::as_hash((L2CValue *)(auStack336 + 0x10));
      uVar4 = lib::L2CValue::as_number((L2CValue *)auStack336);
      lVar15 = lib::L2CValue::as_number((L2CValue *)auStack352);
      uVar13 = lib::L2CValue::as_number((L2CValue *)auStack368);
      local_70 = (void **)(uVar4 & 0xffffffff | lVar15 << 0x20);
      plStack104 = (lua_State *)(ulong)uVar13;
      puVar10 = &local_70;
      app::lua_bind::ModelModule__joint_rotate_impl(*ppBVar11,HVar6,(Vector3f *)puVar10);
      lib::L2CValue::L2CValue((L2CValue *)local_1b0,(float)local_70);
      pLVar7 = (L2CValue *)(local_1b0 + 0x10);
      lib::L2CValue::L2CValue(pLVar7,local_70._4_4_);
      lib::L2CValue::L2CValue(aLStack400,plStack104._0_4_);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)local_1b0);
      lib::L2CValue::operator_(aLStack288,pLVar7);
      lib::L2CValue::operator_(aLStack224,aLStack400);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(pLVar7);
      lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
      lib::L2CValue::_L2CValue((L2CValue *)auStack368);
      lib::L2CValue::_L2CValue((L2CValue *)auStack352);
      lib::L2CValue::_L2CValue((L2CValue *)auStack336);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack336 + 0x10));
      lib::L2CValue::L2CValue
                ((L2CValue *)local_1b0,
                 _FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_X);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1b0);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar12);
      lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_1b0,
                 _FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_Y);
      pLVar7 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)local_1b0);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,(int)pLVar7);
      lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),fVar12);
      lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
      lib::L2CAgent::math_abs((L2CAgent *)&local_70,pLVar7);
      lib::L2CValue::operator_((L2CValue *)auStack368);
      pLVar7 = (L2CValue *)(auStack336 + 0x10);
      lib::L2CAgent::math_atan((L2CAgent *)auStack352,pLVar7,(L2CValue *)puVar10);
      lib::L2CAgent::math_deg((L2CAgent *)auStack336,pLVar7);
      lib::L2CValue::operator_(aLStack208,(L2CValue *)local_1b0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
      lib::L2CValue::_L2CValue((L2CValue *)auStack336);
      lib::L2CValue::_L2CValue((L2CValue *)auStack352);
      lib::L2CValue::_L2CValue((L2CValue *)auStack368);
      HVar6 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar11);
      lib::L2CValue::L2CValue((L2CValue *)local_1b0,HVar6);
      lib::L2CValue::operator_(aLStack240,(L2CValue *)local_1b0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
      HVar6 = lib::L2CValue::as_hash(aLStack240);
      uVar13 = app::lua_bind::MotionModule__end_frame_from_hash_impl(*ppBVar11,HVar6);
      lib::L2CValue::L2CValue((L2CValue *)local_1b0,uVar13);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)local_1b0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
      lib::L2CValue::L2CValue((L2CValue *)auStack336,0x1086bc4a93);
      lib::L2CValue::L2CValue((L2CValue *)auStack352,0xff400ab28);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack336);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack352);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar4,uVar5);
      lib::L2CValue::L2CValue((L2CValue *)local_1b0,iVar3);
      lib::L2CValue::operator_(aLStack144,(L2CValue *)local_1b0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
      lib::L2CValue::_L2CValue((L2CValue *)auStack352);
      lib::L2CValue::_L2CValue((L2CValue *)auStack336);
      lib::L2CValue::operator_(aLStack160,aLStack144);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)local_1b0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
      lib::L2CValue::operator_(aLStack256,aLStack192);
      lib::L2CValue::operator_(aLStack304,(L2CValue *)local_1b0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
      lib::L2CValue::operator_(aLStack144,aLStack160);
      fVar12 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar11);
      lib::L2CValue::L2CValue((L2CValue *)auStack368,fVar12);
      lib::L2CValue::operator_((L2CValue *)auStack368,aLStack304);
      lib::L2CValue::operator_(aLStack144,aLStack304);
      lib::L2CValue::operator_((L2CValue *)auStack352,aLStack384);
      lib::L2CValue::operator_(aLStack208,(L2CValue *)auStack336);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)local_1b0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
      lib::L2CValue::_L2CValue((L2CValue *)auStack336);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue((L2CValue *)auStack352);
      lib::L2CValue::_L2CValue((L2CValue *)auStack368);
      lib::L2CValue::operator_(aLStack128,aLStack208);
      lib::L2CValue::operator_(aLStack176,(L2CValue *)local_1b0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
      lib::L2CValue::L2CValue((L2CValue *)local_1b0,0.0);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)local_1b0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_1b0,
                 _FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_ROT_X);
      fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack336);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1b0);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
      lib::L2CValue::_L2CValue((L2CValue *)auStack336);
      lib::L2CValue::L2CValue((L2CValue *)auStack336,0x31d39a761);
      HVar6 = lib::L2CValue::as_hash((L2CValue *)auStack336);
      uVar4 = lib::L2CValue::as_number(aLStack128);
      lVar15 = lib::L2CValue::as_number(aLStack288);
      uVar13 = lib::L2CValue::as_number(aLStack224);
      local_1b0._0_8_ = (void **)(uVar4 & 0xffffffff | lVar15 << 0x20);
      local_1b0._8_8_ = (lua_State *)(ulong)uVar13;
      app::lua_bind::ModelModule__set_joint_rotate_impl(*ppBVar11,HVar6,(Vector3f *)local_1b0,0,0);
      goto LAB_710002a2d8;
    }
  }
  else {
    fVar12 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar11);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar12);
    fVar12 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar11);
    lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),fVar12);
    lib::L2CValue::operator_((L2CValue *)&local_70,(L2CValue *)&local_70);
    lib::L2CValue::operator_((L2CValue *)(auStack336 + 0x10),(L2CValue *)(auStack336 + 0x10));
    pLVar7 = (L2CValue *)auStack368;
    lib::L2CValue::operator_((L2CValue *)auStack352,pLVar7);
    lib::L2CAgent::math_sqrt((L2CAgent *)local_1b0,pLVar7);
    lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack368);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::L2CValue((L2CValue *)local_1b0,0.001);
    uVar4 = lib::L2CValue::operator__((L2CValue *)local_1b0,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_1b0,-0.001);
      uVar4 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)local_1b0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_1b0,1.0);
        fVar12 = (float)lib::L2CValue::as_number((L2CValue *)local_1b0);
        app::lua_bind::PostureModule__set_lr_impl(*ppBVar11,fVar12);
        goto LAB_710002a018;
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)local_1b0,-1.0);
      fVar12 = (float)lib::L2CValue::as_number((L2CValue *)local_1b0);
      app::lua_bind::PostureModule__set_lr_impl(*ppBVar11,fVar12);
LAB_710002a018:
      lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
    }
    app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar11);
    lib::L2CValue::L2CValue((L2CValue *)local_1b0,0.999);
    uVar4 = lib::L2CValue::operator_((L2CValue *)local_1b0,(L2CValue *)auStack336);
    lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_1b0,0.999);
      lib::L2CValue::operator_((L2CValue *)auStack336,(L2CValue *)local_1b0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack352,0x1086bc4a93);
    lib::L2CValue::L2CValue((L2CValue *)auStack368,0xaca5b425b);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack352);
    pLVar7 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack368);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar4,(ulong)pLVar7);
    lib::L2CValue::L2CValue((L2CValue *)local_1b0,fVar12);
    uVar4 = lib::L2CValue::operator_((L2CValue *)auStack336,(L2CValue *)local_1b0);
    lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack368);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_1b0,0.0);
      lib::L2CValue::operator_((L2CValue *)&local_70,(L2CValue *)local_1b0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
      lib::L2CValue::L2CValue((L2CValue *)local_1b0,1.0);
      lib::L2CValue::operator_((L2CValue *)(auStack336 + 0x10),(L2CValue *)local_1b0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
    }
    fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
    fVar14 = (float)lib::L2CValue::as_number((L2CValue *)(auStack336 + 0x10));
    uVar16 = app::sv_math::vec2_normalize(fVar12,fVar14);
    lib::L2CValue::L2CValue((L2CValue *)local_1b0,(float)uVar16);
    pLVar9 = (L2CValue *)(local_1b0 + 0x10);
    lib::L2CValue::L2CValue(pLVar9,(float)((ulong)uVar16 >> 0x20));
    lib::L2CValue::operator_((L2CValue *)&local_70,(L2CValue *)local_1b0);
    pLVar8 = pLVar9;
    lib::L2CValue::operator_((L2CValue *)(auStack336 + 0x10),pLVar9);
    lib::L2CValue::_L2CValue(pLVar9);
    lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
    lib::L2CAgent::math_abs((L2CAgent *)&local_70,pLVar8);
    lib::L2CValue::operator_(aLStack384);
    pLVar9 = (L2CValue *)(auStack336 + 0x10);
    lib::L2CAgent::math_atan((L2CAgent *)auStack368,pLVar9,pLVar7);
    lib::L2CAgent::math_deg((L2CAgent *)auStack352,pLVar9);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)local_1b0);
    lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue((L2CValue *)auStack368);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::L2CValue((L2CValue *)local_1b0,0.0);
    lib::L2CValue::operator_((L2CValue *)&local_70,(L2CValue *)local_1b0);
    lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_1b0,
               _FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_X);
    fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack352);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1b0);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::L2CValue((L2CValue *)local_1b0,0.0);
    lib::L2CValue::operator_((L2CValue *)(auStack336 + 0x10),(L2CValue *)local_1b0);
    lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_1b0,
               _FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_Y);
    fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack352);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1b0);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
LAB_710002a2d8:
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack336 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
  uVar4 = lib::L2CValue::operator_(aLStack256,aLStack272);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_1b0,false);
    lib::L2CValue::operator_((L2CValue *)&local_70,(L2CValue *)local_1b0);
    lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
  }
  lib::L2CValue::L2CValue((L2CValue *)local_1b0,(L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),true);
  FUN_7100028690(this,local_1b0,auStack336 + 0x10);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack336 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)local_1b0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710002a378:
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

