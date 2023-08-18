
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPackun::status::SpecialLwCharge_main_loop(L2CFighterPackun *this,L2CValue *return_value)

{
  L2CValue *this_00;
  L2CValue LVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  GroundCorrectKind GVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  ulong uVar9;
  L2CAgent *pLVar10;
  Hash40 HVar11;
  L2CValue *pLVar12;
  L2CValue *pLVar13;
  L2CValue *pLVar14;
  L2CValue *pLVar15;
  L2CValue *pLVar16;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  L2CValue *this_04;
  L2CTable *this_05;
  float *pfVar17;
  void ***pppvVar18;
  undefined8 *this_06;
  BattleObjectModuleAccessor **ppBVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  long lVar23;
  L2CValue aLStack816 [16];
  L2CValue aLStack800 [16];
  L2CValue aLStack784 [16];
  L2CValue aLStack768 [16];
  L2CValue aLStack752 [16];
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  void **local_280;
  ulong uStack632;
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  undefined8 auStack400 [2];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  undefined8 local_c0;
  undefined8 uStack184;
  undefined8 local_b0;
  undefined8 uStack168;
  void **local_a0;
  lua_State *plStack152;
  undefined8 local_90;
  ulong uStack136;
  
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1018dfb2f4);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x10b8aaa5c5);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  ppBVar19 = &this->moduleAccessor;
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar19,uVar8,uVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_280,iVar4);
  uVar8 = lib::L2CValue::operator__((L2CValue *)&local_280,pLVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_280);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
    lib::L2CValue::L2CValue((L2CValue *)&local_280,0x1018dfb2f4);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,0x106f411784);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_280);
    uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar19,uVar8,uVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_280);
    lib::L2CValue::L2CValue((L2CValue *)&local_280,0x1018dfb2f4);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,0x17bacfd282);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_280);
    uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar19,uVar8,uVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_280);
    lib::L2CValue::L2CValue(aLStack208,CONTROL_PAD_BUTTON_SPECIAL);
    iVar4 = lib::L2CValue::as_integer(aLStack208);
    bVar2 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar19,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_280,false);
    uVar8 = lib::L2CValue::operator__((L2CValue *)&local_c0,(L2CValue *)&local_280);
    lib::L2CValue::_L2CValue((L2CValue *)&local_280);
    if ((uVar8 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
      lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)&local_b0);
      uVar8 = lib::L2CValue::operator__((L2CValue *)&local_280,pLVar7);
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::_L2CValue(aLStack208);
      if ((uVar8 & 1) != 0) goto LAB_7100028360;
    }
    else {
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::_L2CValue(aLStack208);
LAB_7100028360:
      lib::L2CValue::L2CValue((L2CValue *)&local_280,true);
      lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)&local_280);
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_280,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_280);
    lib::L2CValue::_L2CValue((L2CValue *)&local_280);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack208,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack224,0x1935d79c26);
      uVar8 = lib::L2CValue::as_integer(aLStack208);
      uVar9 = lib::L2CValue::as_integer(aLStack224);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar19,uVar8,uVar9);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_280,1);
      uVar8 = lib::L2CValue::operator__((L2CValue *)&local_c0,(L2CValue *)&local_280);
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_c0,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_DEGREE);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
        fVar20 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar19,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_280,fVar20);
        lib::L2CValue::L2CValue(aLStack224,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack240,0x134fcd50f2);
        uVar8 = lib::L2CValue::as_integer(aLStack224);
        uVar9 = lib::L2CValue::as_integer(aLStack240);
        fVar20 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar19,uVar8,uVar9);
        lib::L2CValue::L2CValue(aLStack208,fVar20);
        uVar8 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_280);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_280,true);
          lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)&local_280);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        }
      }
    }
    bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
    if ((bVar3 & 1U) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
      lib::L2CValue::L2CValue((L2CValue *)&local_280,pLVar7);
      uVar8 = lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)&local_280);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::operator_((L2CValue *)&local_280,(L2CValue *)&local_a0);
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_c0,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_INT_CHARGE_COUNT);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar19,iVar4,iVar5);
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::L2CValue(aLStack368,_FIGHTER_PACKUN_STATUS_KIND_SPECIAL_LW_BITE);
      lib::L2CValue::L2CValue(aLStack384,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      this_06 = &local_90;
      goto LAB_710002ad6c;
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack400,false);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_TILT_START);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar19,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_280,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_280);
  lib::L2CValue::_L2CValue((L2CValue *)&local_280);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_280,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_TILT_START);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar19,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_280);
    lib::L2CValue::L2CValue((L2CValue *)&local_280,0x1018dfb2f4);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0x161b631195);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_280);
    uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    fVar20 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar19,uVar8,uVar9);
    lib::L2CValue::L2CValue(aLStack208,fVar20);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_280);
    pLVar7 = (L2CValue *)0x1a;
    pLVar10 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    lib::L2CAgent::math_abs(pLVar10,pLVar7);
    uVar8 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_280);
    lib::L2CValue::_L2CValue((L2CValue *)&local_280);
    if ((uVar8 & 1) != 0) {
      fVar20 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar19);
      lib::L2CValue::L2CValue(aLStack224,fVar20);
      lib::L2CValue::L2CValue(aLStack240,false);
      lib::L2CValue::L2CValue((L2CValue *)&local_280,1.0);
      uVar8 = lib::L2CValue::operator__(aLStack224,(L2CValue *)&local_280);
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      if ((uVar8 & 1) == 0) {
LAB_71000287c8:
        lib::L2CValue::L2CValue((L2CValue *)&local_280,-1.0);
        uVar8 = lib::L2CValue::operator__(aLStack224,(L2CValue *)&local_280);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        if ((uVar8 & 1) != 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
          lib::L2CValue::L2CValue((L2CValue *)&local_280,0.0);
          uVar8 = lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_280);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          if ((uVar8 & 1) != 0) goto LAB_7100028848;
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_280,true);
        lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_280);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      }
      else {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
        lib::L2CValue::L2CValue((L2CValue *)&local_280,0.0);
        uVar8 = lib::L2CValue::operator_((L2CValue *)&local_280,pLVar7);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        if ((uVar8 & 1) == 0) goto LAB_71000287c8;
      }
LAB_7100028848:
      lib::L2CValue::L2CValue((L2CValue *)&local_280,true);
      lib::L2CValue::operator_((L2CValue *)auStack400,(L2CValue *)&local_280);
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      lib::L2CValue::L2CValue((L2CValue *)&local_280,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_TILT);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar19,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack240);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_280,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_TOP_DEGREE);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
        fVar20 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar19,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar20);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        lib::L2CValue::operator_((L2CValue *)&local_90);
        lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)&local_280);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        lib::L2CValue::L2CValue((L2CValue *)&local_280,0.0);
        lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)&local_280);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_280,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_TOP_DEGREE);
        fVar20 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar19,fVar20,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_280,SITUATION_KIND_AIR);
      uVar8 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_280);
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_280,GROUND_CORRECT_KIND_GROUND);
        GVar6 = lib::L2CValue::as_integer((L2CValue *)&local_280);
        app::lua_bind::GroundModule__correct_impl(*ppBVar19,GVar6);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        lib::L2CValue::L2CValue((L2CValue *)&local_280,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar19,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0x11928d91f6);
        fVar20 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar19);
        lib::L2CValue::L2CValue((L2CValue *)&local_b0,fVar20);
        lib::L2CValue::L2CValue((L2CValue *)&local_280,1.0);
        lib::L2CValue::operator_((L2CValue *)&local_b0,(L2CValue *)&local_280);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        lib::L2CValue::L2CValue((L2CValue *)&local_280,1.0);
        lib::L2CValue::L2CValue((L2CValue *)&local_c0,false);
        HVar11 = lib::L2CValue::as_hash((L2CValue *)&local_90);
        fVar20 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
        fVar21 = (float)lib::L2CValue::as_number((L2CValue *)&local_280);
        bVar2 = lib::L2CValue::as_bool((L2CValue *)&local_c0);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar19,HVar11,fVar20,fVar21,(bool)(bVar2 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue((L2CValue *)&local_280,_FIGHTER_PACKUN_TILT_INIT_STATUS_START);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_INT_TILT_INIT_STATUS
                  );
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar19,iVar4,iVar5);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        pppvVar18 = &local_280;
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_280,GROUND_CORRECT_KIND_AIR);
        GVar6 = lib::L2CValue::as_integer((L2CValue *)&local_280);
        app::lua_bind::GroundModule__correct_impl(*ppBVar19,GVar6);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        lib::L2CValue::L2CValue((L2CValue *)&local_280,_FIGHTER_KINETIC_TYPE_AIR_STOP);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar19,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        FUN_710000cf20(this);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0x15e4d065e9);
        fVar20 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar19);
        lib::L2CValue::L2CValue((L2CValue *)&local_b0,fVar20);
        lib::L2CValue::L2CValue((L2CValue *)&local_280,1.0);
        lib::L2CValue::operator_((L2CValue *)&local_b0,(L2CValue *)&local_280);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        lib::L2CValue::L2CValue((L2CValue *)&local_280,1.0);
        lib::L2CValue::L2CValue((L2CValue *)&local_c0,false);
        HVar11 = lib::L2CValue::as_hash((L2CValue *)&local_90);
        fVar20 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
        fVar21 = (float)lib::L2CValue::as_number((L2CValue *)&local_280);
        bVar2 = lib::L2CValue::as_bool((L2CValue *)&local_c0);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar19,HVar11,fVar20,fVar21,(bool)(bVar2 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
        pppvVar18 = (void ***)&local_90;
      }
      lib::L2CValue::_L2CValue((L2CValue *)pppvVar18);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0x31d39a761);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_b0,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_DEGREE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
      fVar20 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar19,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar20);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      HVar11 = lib::L2CValue::as_hash((L2CValue *)&local_90);
      uVar8 = lib::L2CValue::as_number((L2CValue *)&local_a0);
      lVar23 = lib::L2CValue::as_number((L2CValue *)&local_c0);
      uVar22 = lib::L2CValue::as_number(aLStack256);
      local_280 = (void **)(uVar8 & 0xffffffff | lVar23 << 0x20);
      uStack632 = (ulong)uVar22;
      app::lua_bind::ModelModule__set_joint_rotate_impl(*ppBVar19,HVar11,(Vector3f *)&local_280,0,0)
      ;
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_280,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_280);
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack416,0.0);
        lib::L2CValue::L2CValue(aLStack432,0.0);
        lib::L2CValue::L2CValue(aLStack448,0.0);
        lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
        lib::L2CValue::_L2CValue(aLStack448);
        lib::L2CValue::_L2CValue(aLStack432);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::L2CValue(aLStack464,0.0);
        lib::L2CValue::L2CValue(aLStack480,0.0);
        lib::L2CValue::L2CValue(aLStack496,0.0);
        lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10);
        lib::L2CValue::_L2CValue(aLStack496);
        lib::L2CValue::_L2CValue(aLStack480);
        lib::L2CValue::_L2CValue(aLStack464);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
        pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
        pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x162d277af);
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x31d39a761);
        pLVar14 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
        pLVar15 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
        pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x162d277af);
        HVar11 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
        uVar8 = lib::L2CValue::as_number(pLVar14);
        lVar23 = lib::L2CValue::as_number(pLVar15);
        uVar22 = lib::L2CValue::as_number(pLVar16);
        local_90 = (Hash40MapEntry **)(uVar8 & 0xffffffff | lVar23 << 0x20);
        uStack136 = (ulong)uVar22;
        app::lua_bind::ModelModule__joint_global_position_impl
                  (*ppBVar19,HVar11,(Vector3f *)&local_90,true);
        lib::L2CValue::L2CValue((L2CValue *)&local_280,(float)local_90);
        lib::L2CValue::L2CValue(aLStack624,local_90._4_4_);
        lib::L2CValue::L2CValue(aLStack608,(float)uStack136);
        lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_280);
        lib::L2CValue::operator_(pLVar12,aLStack624);
        lib::L2CValue::operator_(pLVar13,aLStack608);
        lib::L2CValue::_L2CValue(aLStack608);
        lib::L2CValue::_L2CValue(aLStack624);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
        pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x1fbdb2615);
        lib::L2CValue::operator_(pLVar12,pLVar7);
        lib::L2CValue::L2CValue(aLStack512,0.0);
        lib::L2CValue::L2CValue(aLStack528,0.0);
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x0,(L2CValue)0xf0);
        lib::L2CValue::_L2CValue(aLStack528);
        lib::L2CValue::_L2CValue(aLStack512);
        lib::L2CValue::L2CValue(aLStack544,0.0);
        lib::L2CValue::L2CValue(aLStack560,0.0);
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xe0,(L2CValue)0xd0);
        lib::L2CValue::_L2CValue(aLStack560);
        lib::L2CValue::_L2CValue(aLStack544);
        lib::L2CValue::L2CValue(aLStack320,false);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
        lib::L2CValue::L2CValue((L2CValue *)&local_280,2.0);
        lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_280);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
        lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x18cdc1683);
        pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x1fbdb2615);
        pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
        pLVar14 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
        pLVar15 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
        pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack336,0.0);
        lib::L2CValue::L2CValue(aLStack352,-4.0);
        this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x18cdc1683);
        this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x1fbdb2615);
        this_03 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
        this_04 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack656,true);
        uVar8 = lib::L2CValue::as_number(pLVar15);
        uVar22 = lib::L2CValue::as_number(pLVar16);
        local_90 = (Hash40MapEntry **)(uVar8 & 0xffffffff | (ulong)uVar22 << 0x20);
        uStack136 = 0;
        uVar8 = lib::L2CValue::as_number(aLStack336);
        uVar22 = lib::L2CValue::as_number(aLStack352);
        local_a0 = (void **)(uVar8 & 0xffffffff | (ulong)uVar22 << 0x20);
        plStack152 = (lua_State *)0x0;
        uVar8 = lib::L2CValue::as_number(this_01);
        uVar22 = lib::L2CValue::as_number(this_02);
        local_b0 = uVar8 & 0xffffffff | (ulong)uVar22 << 0x20;
        uStack168 = 0;
        uVar8 = lib::L2CValue::as_number(this_03);
        uVar22 = lib::L2CValue::as_number(this_04);
        local_c0 = (void **)(uVar8 & 0xffffffff | (ulong)uVar22 << 0x20);
        uStack184 = 0;
        bVar2 = lib::L2CValue::as_bool(aLStack656);
        pppvVar18 = &local_a0;
        bVar2 = app::lua_bind::GroundModule__ray_check_hit_pos_normal_impl
                          (*ppBVar19,(Vector2f *)&local_90,(Vector2f *)pppvVar18,
                           (Vector2f *)&local_b0,(Vector2f *)&local_c0,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_280,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack624,(float)local_b0);
        lib::L2CValue::L2CValue(aLStack608,local_b0._4_4_);
        lib::L2CValue::L2CValue(aLStack592,(float)local_c0);
        lib::L2CValue::L2CValue(aLStack576,local_c0._4_4_);
        lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_280);
        lib::L2CValue::operator_(pLVar7,aLStack624);
        lib::L2CValue::operator_(pLVar12,aLStack608);
        lib::L2CValue::operator_(pLVar13,aLStack592);
        lib::L2CValue::operator_(pLVar14,aLStack576);
        lib::L2CValue::_L2CValue(aLStack576);
        lib::L2CValue::_L2CValue(aLStack592);
        lib::L2CValue::_L2CValue(aLStack608);
        lib::L2CValue::_L2CValue(aLStack624);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        lib::L2CValue::_L2CValue(aLStack656);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x1fbdb2615);
        pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x1fbdb2615);
        uVar8 = lib::L2CValue::operator_(pLVar12,pLVar7);
        if ((uVar8 & 1) != 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x1fbdb2615);
          pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x1fbdb2615);
          lib::L2CValue::operator_(pLVar7,pLVar12);
          lib::L2CValue::L2CValue((L2CValue *)&local_280,0.1);
          uVar8 = lib::L2CValue::operator_((L2CValue *)&local_280,(L2CValue *)&local_a0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
          if ((uVar8 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_280,false);
            lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)&local_280);
            lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          }
        }
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack320);
        if ((bVar3 & 1U) == 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_280,
                     _FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_TILT_INIT_MODIFY_ROT);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar19,iVar4);
          pppvVar18 = &local_280;
        }
        else {
          pLVar10 = (L2CAgent *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
          lib::L2CAgent::math_atan(pLVar10,pLVar7,(L2CValue *)pppvVar18);
          lib::L2CAgent::math_deg((L2CAgent *)&local_a0,pLVar7);
          FUN_710000cbb0(&local_c0,this);
          lib::L2CValue::L2CValue(aLStack336,false);
          lib::L2CValue::L2CValue((L2CValue *)&local_280,0.0);
          uVar8 = lib::L2CValue::operator__((L2CValue *)&local_c0,(L2CValue *)&local_280);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_280,0.0);
            uVar8 = lib::L2CValue::operator__((L2CValue *)&local_b0,(L2CValue *)&local_280);
            lib::L2CValue::_L2CValue((L2CValue *)&local_280);
            if ((uVar8 & 1) == 0) goto LAB_7100029564;
            lib::L2CValue::L2CValue((L2CValue *)&local_280,true);
            lib::L2CValue::operator_(aLStack336,(L2CValue *)&local_280);
LAB_71000295cc:
            lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          }
          else {
LAB_7100029564:
            lib::L2CValue::L2CValue((L2CValue *)&local_280,0.0);
            uVar8 = lib::L2CValue::operator__((L2CValue *)&local_c0,(L2CValue *)&local_280);
            lib::L2CValue::_L2CValue((L2CValue *)&local_280);
            if ((uVar8 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_280,0.0);
              uVar8 = lib::L2CValue::operator__((L2CValue *)&local_b0,(L2CValue *)&local_280);
              lib::L2CValue::_L2CValue((L2CValue *)&local_280);
              if ((uVar8 & 1) == 0) {
                lib::L2CValue::L2CValue((L2CValue *)&local_280,true);
                lib::L2CValue::operator_(aLStack336,(L2CValue *)&local_280);
                goto LAB_71000295cc;
              }
            }
          }
          this_05 = (L2CTable *)operator_new(0x48);
          lib::L2CTable::L2CTable(this_05,0);
          lib::L2CValue::L2CValue(aLStack352,this_05);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x18cdc1683);
          lib::L2CValue::L2CValue((L2CValue *)&local_280,0);
          lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_280);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x1fbdb2615);
          lib::L2CValue::L2CValue((L2CValue *)&local_280,0);
          lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_280);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x162d277af);
          lib::L2CValue::L2CValue((L2CValue *)&local_280,0);
          lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_280);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x18cdc1683);
          pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x1fbdb2615);
          pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x162d277af);
          pfVar17 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar19);
          lib::L2CValue::L2CValue((L2CValue *)&local_280,*pfVar17);
          lib::L2CValue::L2CValue(aLStack624,pfVar17[1]);
          lib::L2CValue::L2CValue(aLStack608,pfVar17[2]);
          lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_280);
          lib::L2CValue::operator_(pLVar12,aLStack624);
          lib::L2CValue::operator_(pLVar13,aLStack608);
          lib::L2CValue::_L2CValue(aLStack608);
          lib::L2CValue::_L2CValue(aLStack624);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x1fbdb2615);
          pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x1fbdb2615);
          lib::L2CValue::operator_(pLVar7,pLVar12);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x1fbdb2615);
          lib::L2CValue::operator_(pLVar7,aLStack656);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x1fbdb2615);
          lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_280);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
          if ((bVar3 & 1U) != 0) {
            pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x18cdc1683);
            pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x1fbdb2615);
            pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x162d277af);
            uVar8 = lib::L2CValue::as_number(pLVar7);
            lVar23 = lib::L2CValue::as_number(pLVar12);
            uVar22 = lib::L2CValue::as_number(pLVar13);
            local_280 = (void **)(uVar8 & 0xffffffff | lVar23 << 0x20);
            uStack632 = (ulong)uVar22;
            app::lua_bind::PostureModule__set_pos_impl(*ppBVar19,(Vector3f *)&local_280);
          }
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack336);
          if ((bVar3 & 1U) == 0) {
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_280,
                       _FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_TILT_INIT_MODIFY_ROT);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
            app::lua_bind::WorkModule__off_flag_impl(*ppBVar19,iVar4);
          }
          else {
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_280,
                       _FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_TILT_INIT_MODIFY_ROT);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar19,iVar4);
          }
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          lib::L2CValue::_L2CValue(aLStack656);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
          pppvVar18 = &local_a0;
        }
        lib::L2CValue::_L2CValue((L2CValue *)pppvVar18);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_280,
                 _FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_SITUATION_AIR_TO_GROUND);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar19,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_280,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_BACK_TILT);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar19,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_280,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_GROUND);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar19,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_280,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_GROUND_TILT);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar19,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_280,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_GROUND_SE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar19,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
    }
    lib::L2CValue::_L2CValue(aLStack208);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_280,false);
  uVar8 = lib::L2CValue::operator__((L2CValue *)auStack400,(L2CValue *)&local_280);
  lib::L2CValue::_L2CValue((L2CValue *)&local_280);
  if ((uVar8 & 1) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue((L2CValue *)&local_280,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_280);
    lib::L2CValue::_L2CValue((L2CValue *)&local_280);
    if ((uVar8 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_280,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_280);
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1018dfb2f4);
        lib::L2CValue::L2CValue((L2CValue *)&local_b0,0xe593010a7);
        uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
        fVar20 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar19,uVar8,uVar9);
        lib::L2CValue::L2CValue((L2CValue *)&local_280,fVar20);
        lib::L2CValue::operator_((L2CValue *)&local_280);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue((L2CValue *)&local_280,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
        fVar20 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar19,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_b0,fVar20);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        uVar8 = lib::L2CValue::operator__((L2CValue *)&local_b0,(L2CValue *)&local_a0);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_90,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_90);
          fVar20 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
          lib::L2CValue::L2CValue((L2CValue *)&local_280,fVar20);
          lib::L2CValue::operator_((L2CValue *)&local_b0,(L2CValue *)&local_280);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::L2CValue((L2CValue *)&local_280,0.0);
          lib::L2CValue::operator_((L2CValue *)&local_b0,(L2CValue *)&local_280);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_280,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_SPEED_Y);
          fVar20 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar19,fVar20,iVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::L2CValue((L2CValue *)&local_280,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_280);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_90);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          lib::L2CValue::L2CValue((L2CValue *)&local_280,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
          lib::L2CValue::L2CValue((L2CValue *)&local_c0,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_280);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_90);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_c0);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_280,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_CHANGE_MOTION);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar19,iVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_TILT)
          ;
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar19,iVar4);
          lib::L2CValue::L2CValue((L2CValue *)&local_280,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_280);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          if ((bVar3 & 1U) == 0) {
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_280,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_BACK_TILT);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar19,iVar4);
            lib::L2CValue::_L2CValue((L2CValue *)&local_280);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_280,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_TILT);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
            app::lua_bind::WorkModule__off_flag_impl(*ppBVar19,iVar4);
          }
          else {
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_280,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_BACK_TILT);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
            app::lua_bind::WorkModule__off_flag_impl(*ppBVar19,iVar4);
            lib::L2CValue::_L2CValue((L2CValue *)&local_280);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_280,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_GROUND_TILT
                      );
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
            app::lua_bind::WorkModule__off_flag_impl(*ppBVar19,iVar4);
            lib::L2CValue::_L2CValue((L2CValue *)&local_280);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_280,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_GROUND);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
            app::lua_bind::WorkModule__off_flag_impl(*ppBVar19,iVar4);
            lib::L2CValue::_L2CValue((L2CValue *)&local_280);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_280,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_GROUND_SE);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
            app::lua_bind::WorkModule__off_flag_impl(*ppBVar19,iVar4);
          }
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          lib::L2CValue::L2CValue(aLStack768,0.0);
          lib::L2CValue::L2CValue(aLStack784,0.0);
          lib::L2CValue::L2CValue(aLStack800,0.0);
          lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x0,(L2CValue)0xf0,(L2CValue)0xe0)
          ;
          lib::L2CValue::_L2CValue(aLStack800);
          lib::L2CValue::_L2CValue(aLStack784);
          lib::L2CValue::_L2CValue(aLStack768);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_c0,0x18cdc1683);
          pLVar12 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_c0,0x1fbdb2615);
          pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_c0,0x162d277af);
          lib::L2CValue::L2CValue(aLStack208,0x54f934137);
          pLVar14 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_c0,0x18cdc1683);
          pLVar15 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_c0,0x1fbdb2615);
          pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_c0,0x162d277af);
          HVar11 = lib::L2CValue::as_hash(aLStack208);
          uVar8 = lib::L2CValue::as_number(pLVar14);
          lVar23 = lib::L2CValue::as_number(pLVar15);
          uVar22 = lib::L2CValue::as_number(pLVar16);
          local_90 = (Hash40MapEntry **)(uVar8 & 0xffffffff | lVar23 << 0x20);
          uStack136 = (ulong)uVar22;
          app::lua_bind::ModelModule__joint_global_position_impl
                    (*ppBVar19,HVar11,(Vector3f *)&local_90,true);
          lib::L2CValue::L2CValue((L2CValue *)&local_280,(float)local_90);
          lib::L2CValue::L2CValue(aLStack624,local_90._4_4_);
          lib::L2CValue::L2CValue(aLStack608,(float)uStack136);
          lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_280);
          lib::L2CValue::operator_(pLVar12,aLStack624);
          lib::L2CValue::operator_(pLVar13,aLStack608);
          lib::L2CValue::_L2CValue(aLStack608);
          lib::L2CValue::_L2CValue(aLStack624);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          lib::L2CValue::_L2CValue(aLStack208);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_c0,0x18cdc1683);
          lib::L2CValue::L2CValue((L2CValue *)&local_280,0.0);
          lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_280);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_280,
                     _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_JOINT_THROW_X);
          fVar20 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar19,fVar20,iVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_c0,0x1fbdb2615);
          lib::L2CValue::L2CValue((L2CValue *)&local_280,0.0);
          lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_280);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_280,
                     _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_JOINT_THROW_Y);
          fVar20 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar19,fVar20,iVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_280,
                     _FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_SITUATION_AIR_TO_GROUND);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar19,iVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_280);
          pppvVar18 = (void ***)&local_c0;
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1018dfb2f4);
          lib::L2CValue::L2CValue((L2CValue *)&local_c0,0xd2663f2da);
          uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
          fVar20 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar19,uVar8,uVar9);
          lib::L2CValue::L2CValue((L2CValue *)&local_280,fVar20);
          lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_90);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_280);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::L2CValue(aLStack736,SITUATION_KIND_AIR);
          lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x20);
          lib::L2CValue::_L2CValue(aLStack736);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,GROUND_CORRECT_KIND_AIR);
          GVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          app::lua_bind::GroundModule__correct_impl(*ppBVar19,GVar6);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::L2CValue(aLStack208,0x1018dfb2f4);
          lib::L2CValue::L2CValue(aLStack224,0x13cf857354);
          uVar8 = lib::L2CValue::as_integer(aLStack208);
          uVar9 = lib::L2CValue::as_integer(aLStack224);
          fVar20 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar19,uVar8,uVar9);
          lib::L2CValue::L2CValue((L2CValue *)&local_c0,fVar20);
          lib::L2CValue::operator_((L2CValue *)&local_c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack208);
          uVar8 = lib::L2CValue::operator__((L2CValue *)&local_b0,(L2CValue *)&local_90);
          if ((uVar8 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_c0,0x151ade323f);
            HVar11 = lib::L2CValue::as_hash((L2CValue *)&local_c0);
            iVar4 = app::lua_bind::SoundModule__play_se_impl
                              (*ppBVar19,HVar11,true,false,false,false,0);
            lib::L2CValue::L2CValue(aLStack752,iVar4);
            lib::L2CValue::_L2CValue(aLStack752);
            lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
          }
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          pppvVar18 = &local_280;
        }
        lib::L2CValue::_L2CValue((L2CValue *)pppvVar18);
        lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
        pppvVar18 = &local_a0;
        goto LAB_710002a4b8;
      }
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_280,SITUATION_KIND_AIR);
      uVar8 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_280);
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_TILT);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar19,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_280,(bool)(bVar2 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_280);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        if ((bVar3 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack704,0x15d3492dcd);
          lib::L2CValue::L2CValue(aLStack720,true);
          FUN_7100022220(this,aLStack704,aLStack720);
          lib::L2CValue::_L2CValue(aLStack720);
          pLVar7 = aLStack704;
        }
        else {
          lib::L2CValue::L2CValue(aLStack672,0x15e4d065e9);
          lib::L2CValue::L2CValue(aLStack688,true);
          FUN_7100022220(this,aLStack672,aLStack688);
          lib::L2CValue::_L2CValue(aLStack688);
          pLVar7 = aLStack672;
        }
        lib::L2CValue::_L2CValue(pLVar7);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_280,
                   _FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_SITUATION_AIR_TO_GROUND);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_280);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar19,iVar4);
        pppvVar18 = &local_280;
LAB_710002a4b8:
        lib::L2CValue::_L2CValue((L2CValue *)pppvVar18);
      }
    }
  }
  FUN_7100023410(this);
  lib::L2CValue::L2CValue(aLStack816,false);
  fVar20 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar19);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar20);
  lib::L2CValue::L2CValue((L2CValue *)&local_280,2.5);
  lib::L2CValue::operator_((L2CValue *)&local_280,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_280);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_b0,2.5);
  lib::L2CValue::L2CValue((L2CValue *)&local_280,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_280);
  fVar20 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,fVar20);
  lib::L2CValue::_L2CValue((L2CValue *)&local_280);
  lib::L2CValue::L2CValue(aLStack208,false);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_280,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_280);
  lib::L2CValue::_L2CValue((L2CValue *)&local_280);
  if ((uVar8 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_280,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_280);
    lib::L2CValue::_L2CValue((L2CValue *)&local_280);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_280,0.0);
      uVar8 = lib::L2CValue::operator__((L2CValue *)&local_c0,(L2CValue *)&local_280);
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_280,true);
        lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_280);
        goto LAB_710002a5ac;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_280,true);
    lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_280);
LAB_710002a5ac:
    lib::L2CValue::_L2CValue((L2CValue *)&local_280);
  }
  lib::L2CValue::L2CValue(aLStack224,false);
  fVar20 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar19);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar20);
  fVar20 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  fVar21 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
  bVar2 = app::lua_bind::GroundModule__is_near_cliff_impl(*ppBVar19,fVar20,fVar21);
  lib::L2CValue::L2CValue((L2CValue *)&local_280,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_280);
  if ((bVar3 & 1U) == 0) {
    fVar20 = (float)lib::L2CValue::as_number((L2CValue *)&local_b0);
    bVar2 = app::lua_bind::GroundModule__is_ottotto_impl(*ppBVar19,fVar20);
    lib::L2CValue::L2CValue(aLStack240,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack240);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_280);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((bVar3 & 1U) != 0) goto LAB_710002a6e4;
  }
  else {
    lib::L2CValue::_L2CValue((L2CValue *)&local_280);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
LAB_710002a6e4:
    lib::L2CValue::L2CValue((L2CValue *)&local_280,true);
    lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_280);
    lib::L2CValue::_L2CValue((L2CValue *)&local_280);
  }
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack208);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_TILT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar19,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_280,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_280);
    if ((bVar3 & 1U) == 0) {
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      lVar23 = -0x80;
    }
    else {
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack224);
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((bVar3 & 1U) == 0) goto LAB_710002ad2c;
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      LVar1 = SUB81(&stack0xfffffffffffffff0,0);
      lua2cpp::L2CFighterBase::Vector3__create
                (this,(L2CValue)((char)LVar1 + '\x10'),LVar1,(L2CValue)0xe0);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_280,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_280);
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      if ((uVar8 & 1) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
        pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
        pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
        lib::L2CValue::L2CValue(aLStack304,0x54f934137);
        pLVar14 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
        pLVar15 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
        pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
        HVar11 = lib::L2CValue::as_hash(aLStack304);
        uVar8 = lib::L2CValue::as_number(pLVar14);
        lVar23 = lib::L2CValue::as_number(pLVar15);
        uVar22 = lib::L2CValue::as_number(pLVar16);
        local_90 = (Hash40MapEntry **)(uVar8 & 0xffffffff | lVar23 << 0x20);
        uStack136 = (ulong)uVar22;
        app::lua_bind::ModelModule__joint_global_position_impl
                  (*ppBVar19,HVar11,(Vector3f *)&local_90,true);
        lib::L2CValue::L2CValue((L2CValue *)&local_280,(float)local_90);
        lib::L2CValue::L2CValue(aLStack624,local_90._4_4_);
        lib::L2CValue::L2CValue(aLStack608,(float)uStack136);
        lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_280);
        lib::L2CValue::operator_(pLVar12,aLStack624);
        lib::L2CValue::operator_(pLVar13,aLStack608);
      }
      else {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
        pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
        pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
        lib::L2CValue::L2CValue(aLStack304,0x31d39a761);
        pLVar14 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
        pLVar15 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
        pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
        HVar11 = lib::L2CValue::as_hash(aLStack304);
        uVar8 = lib::L2CValue::as_number(pLVar14);
        lVar23 = lib::L2CValue::as_number(pLVar15);
        uVar22 = lib::L2CValue::as_number(pLVar16);
        local_90 = (Hash40MapEntry **)(uVar8 & 0xffffffff | lVar23 << 0x20);
        uStack136 = (ulong)uVar22;
        app::lua_bind::ModelModule__joint_global_position_impl
                  (*ppBVar19,HVar11,(Vector3f *)&local_90,true);
        lib::L2CValue::L2CValue((L2CValue *)&local_280,(float)local_90);
        lib::L2CValue::L2CValue(aLStack624,local_90._4_4_);
        lib::L2CValue::L2CValue(aLStack608,(float)uStack136);
        lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_280);
        lib::L2CValue::operator_(pLVar12,aLStack624);
        lib::L2CValue::operator_(pLVar13,aLStack608);
      }
      lib::L2CValue::_L2CValue(aLStack608);
      lib::L2CValue::_L2CValue(aLStack624);
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      lib::L2CValue::_L2CValue(aLStack304);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
      pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,-0.5);
      lib::L2CValue::L2CValue(aLStack352,true);
      uVar8 = lib::L2CValue::as_number(pLVar7);
      uVar22 = lib::L2CValue::as_number(pLVar12);
      local_280 = (void **)(uVar8 & 0xffffffff | (ulong)uVar22 << 0x20);
      uStack632 = 0;
      uVar8 = lib::L2CValue::as_number(aLStack320);
      uVar22 = lib::L2CValue::as_number(aLStack336);
      local_90 = (Hash40MapEntry **)(uVar8 & 0xffffffff | (ulong)uVar22 << 0x20);
      uStack136 = 0;
      bVar2 = lib::L2CValue::as_bool(aLStack352);
      bVar2 = app::lua_bind::GroundModule__ray_check_impl
                        (*ppBVar19,(Vector2f *)&local_280,(Vector2f *)&local_90,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack304,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_280,false);
      uVar8 = lib::L2CValue::operator__(aLStack304,(L2CValue *)&local_280);
      lib::L2CValue::_L2CValue((L2CValue *)&local_280);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_280,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack304,0x125ea4c595);
        uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_280);
        uVar9 = lib::L2CValue::as_integer(aLStack304);
        fVar20 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar19,uVar8,uVar9);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar20);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        fVar20 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar19);
        lib::L2CValue::L2CValue((L2CValue *)&local_280,fVar20);
        lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)&local_280);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        lib::L2CValue::L2CValue((L2CValue *)&local_280,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CValue::L2CValue(aLStack320,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_280);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
        app::sv_kinetic_energy::set_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        lib::L2CValue::L2CValue((L2CValue *)&local_280,true);
        lib::L2CValue::operator_(aLStack816,(L2CValue *)&local_280);
        lib::L2CValue::_L2CValue((L2CValue *)&local_280);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      }
      lVar23 = -0xe0;
    }
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar23));
  }
LAB_710002ad2c:
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue(aLStack816);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  this_06 = auStack400;
LAB_710002ad6c:
  lib::L2CValue::_L2CValue((L2CValue *)this_06);
  return;
}

