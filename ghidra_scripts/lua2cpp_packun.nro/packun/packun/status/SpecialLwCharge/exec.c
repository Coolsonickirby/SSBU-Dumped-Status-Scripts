
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPackun::status::SpecialLwCharge_exec(L2CFighterPackun *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  L2CAgent *this_01;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  Hash40 HVar13;
  L2CTable *this_02;
  float *pfVar14;
  undefined8 *puVar15;
  L2CValue *pLVar16;
  BattleObjectModuleAccessor **ppBVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  undefined8 uVar22;
  long lVar23;
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
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
  undefined auStack400 [16];
  undefined local_180 [32];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  undefined8 auStack272 [2];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined8 auStack224 [2];
  undefined auStack208 [32];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack400 + 0x10),_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_DEGREE);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
  ppBVar17 = &this->moduleAccessor;
  fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar4);
  lib::L2CValue::L2CValue(aLStack160,fVar18);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),true);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_TILT);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack208,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_GROUND_TILT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack208);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),false);
    uVar6 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),false);
      lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),(L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_BACK_TILT);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),false);
    lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack208 + 0x10));
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0x1018dfb2f4);
    lib::L2CValue::L2CValue((L2CValue *)auStack208,0x161b631195);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
    uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack208);
    fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar18);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    this_00 = &this->globalTable;
    pLVar16 = (L2CValue *)0x1a;
    this_01 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    lib::L2CAgent::math_abs(this_01,pLVar16);
    uVar6 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    if ((uVar6 & 1) != 0) {
      fVar18 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar17);
      lib::L2CValue::L2CValue((L2CValue *)auStack208,fVar18);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,false);
      lib::L2CValue::L2CValue(aLStack240,false);
      lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),1.0);
      uVar6 = lib::L2CValue::operator__((L2CValue *)auStack208,(L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
      if ((uVar6 & 1) == 0) {
LAB_7100008eb8:
        lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),-1.0);
        uVar6 = lib::L2CValue::operator__((L2CValue *)auStack208,(L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        if ((uVar6 & 1) != 0) {
          pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
          lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0.0);
          uVar6 = lib::L2CValue::operator_(pLVar16,(L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),true);
            lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)(auStack400 + 0x10));
            goto LAB_7100008fd4;
          }
        }
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack272,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_GROUND_TILT);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack272);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar4);
        lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),false);
        uVar6 = lib::L2CValue::operator__(aLStack256,(L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue((L2CValue *)auStack272);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),true);
          lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),true);
          lib::L2CValue::operator_(aLStack240,(L2CValue *)(auStack400 + 0x10));
          goto LAB_7100008fd4;
        }
      }
      else {
        pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
        lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0.0);
        uVar6 = lib::L2CValue::operator_((L2CValue *)(auStack400 + 0x10),pLVar16);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        if ((uVar6 & 1) == 0) goto LAB_7100008eb8;
        lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),true);
        lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)(auStack400 + 0x10));
LAB_7100008fd4:
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
      }
      lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),true);
      uVar6 = lib::L2CValue::operator__((L2CValue *)auStack224,(L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
      if ((uVar6 & 1) != 0) {
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack240);
        if ((bVar2 & 1U) != 0) {
          app::lua_bind::PostureModule__reverse_lr_impl(*ppBVar17);
          app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar17);
        }
        lib::L2CValue::L2CValue
                  ((L2CValue *)(auStack400 + 0x10),_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_TILT_START
                  );
        iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar17,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
      }
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_BACK_TILT);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_GROUND_TILT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0x1018dfb2f4);
      lib::L2CValue::L2CValue((L2CValue *)auStack208,0x18ec4fe627);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
      uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack208);
      fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar18);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0x1018dfb2f4);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,0x1cbd68dfbb);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
      uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack224);
      fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)auStack208,fVar18);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack400 + 0x10),
                 _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_ADD_DEGREE);
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
      app::lua_bind::WorkModule__add_float_impl(*ppBVar17,fVar18,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack224,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_ADD_DEGREE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack224);
      fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),fVar18);
      uVar6 = lib::L2CValue::operator_((L2CValue *)auStack208,(L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::operator_((L2CValue *)auStack208,(L2CValue *)&local_90);
        lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0.0);
        lib::L2CValue::operator_(aLStack240,(L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::L2CValue
                  ((L2CValue *)(auStack400 + 0x10),
                   _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_ADD_DEGREE);
        fVar18 = (float)lib::L2CValue::as_number((L2CValue *)auStack224);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
        app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)auStack224);
        lib::L2CValue::_L2CValue(aLStack240);
      }
      lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0.0);
      uVar6 = lib::L2CValue::operator_(aLStack160,(L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_ADD_DEGREE);
        iVar4 = lib::L2CValue::as_integer(aLStack240);
        fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)auStack224,fVar18);
        lib::L2CValue::operator_((L2CValue *)auStack224);
        lib::L2CValue::operator_(aLStack176,(L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)auStack224);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::operator_(aLStack160,aLStack176);
        lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0.0);
        uVar6 = lib::L2CValue::operator__((L2CValue *)auStack224,(L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::operator_(aLStack160);
          lib::L2CValue::operator_(aLStack176,(L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::L2CValue
                    ((L2CValue *)(auStack400 + 0x10),
                     _FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_GROUND_TILT);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar17,iVar4);
          goto LAB_7100009f94;
        }
      }
      else {
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack224,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_ADD_DEGREE);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack224);
        fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),fVar18);
        lib::L2CValue::operator_(aLStack176,(L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)auStack224);
        lib::L2CValue::operator_(aLStack160,aLStack176);
        lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0.0);
        uVar6 = lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),(L2CValue *)auStack224);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::operator_(aLStack160);
          lib::L2CValue::operator_(aLStack176,(L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::L2CValue
                    ((L2CValue *)(auStack400 + 0x10),
                     _FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_GROUND_TILT);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar17,iVar4);
LAB_7100009f94:
          lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        }
      }
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack400 + 0x10),
                 _FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_GROUND_SE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar17,iVar4);
      puVar15 = (undefined8 *)(auStack400 + 0x10);
      goto LAB_7100009fcc;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_TILT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_GROUND);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((bVar2 & 1U) == 0) {
        pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar16,(L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        if ((uVar6 & 1) == 0) {
          pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),SITUATION_KIND_AIR);
          uVar6 = lib::L2CValue::operator__(pLVar16,(L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
          if ((uVar6 & 1) == 0) goto LAB_710000bdd8;
          lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0.0);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_90,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_ADD_DEGREE);
          fVar18 = (float)lib::L2CValue::as_number((L2CValue *)(auStack400 + 0x10));
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1018dfb2f4);
          lib::L2CValue::L2CValue((L2CValue *)auStack208,0x157de69c60);
          uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack208);
          fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7);
          lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),fVar18);
          lib::L2CValue::_L2CValue((L2CValue *)auStack208);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::operator_(aLStack176,(L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::L2CValue((L2CValue *)auStack208,0x1018dfb2f4);
          lib::L2CValue::L2CValue((L2CValue *)auStack224,0x134fcd50f2);
          uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack208);
          uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack224);
          fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar18);
          lib::L2CValue::_L2CValue((L2CValue *)auStack224);
          lib::L2CValue::_L2CValue((L2CValue *)auStack208);
          lib::L2CValue::operator_(aLStack160,aLStack176);
          uVar6 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)auStack208);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::operator_((L2CValue *)&local_90,aLStack160);
            lib::L2CValue::operator_(aLStack176,(L2CValue *)auStack224);
            lib::L2CValue::_L2CValue((L2CValue *)auStack224);
          }
LAB_710000b7bc:
          lib::L2CValue::_L2CValue((L2CValue *)auStack208);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          pLVar16 = (L2CValue *)(auStack400 + 0x10);
LAB_710000bdd4:
          lib::L2CValue::_L2CValue(pLVar16);
        }
        else {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_90,
                     _FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_SITUATION_AIR_TO_GROUND);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar4);
          lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0x1018dfb2f4);
            lib::L2CValue::L2CValue((L2CValue *)&local_90,0x18be952e34);
            uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
            uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_90);
            fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7);
            lib::L2CValue::L2CValue((L2CValue *)auStack208,fVar18);
            lib::L2CValue::_L2CValue((L2CValue *)&local_90);
            lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
            lib::L2CValue::operator_(aLStack176,(L2CValue *)auStack208);
            lib::L2CValue::L2CValue(aLStack432,0.0);
            lib::L2CValue::L2CValue(aLStack448,0.0);
            lib::L2CValue::L2CValue(aLStack464,0.0);
            lua2cpp::L2CFighterBase::Vector3__create
                      (this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
            lib::L2CValue::_L2CValue(aLStack464);
            lib::L2CValue::_L2CValue(aLStack448);
            lib::L2CValue::_L2CValue(aLStack432);
            pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack224,0x18cdc1683);
            pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack224,0x1fbdb2615);
            pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack224,0x162d277af);
            lib::L2CValue::L2CValue(aLStack240,0x31d39a761);
            pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack224,0x18cdc1683);
            pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack224,0x1fbdb2615);
            pLVar12 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack224,0x162d277af);
            HVar13 = lib::L2CValue::as_hash(aLStack240);
            uVar6 = lib::L2CValue::as_number(pLVar16);
            lVar23 = lib::L2CValue::as_number(pLVar11);
            uVar21 = lib::L2CValue::as_number(pLVar12);
            local_90 = (BattleObjectModuleAccessor *)(uVar6 & 0xffffffff | lVar23 << 0x20);
            uStack136 = (ulong)uVar21;
            app::lua_bind::ModelModule__joint_global_position_impl
                      (*ppBVar17,HVar13,(Vector3f *)&local_90,true);
            lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),(float)local_90);
            pLVar16 = (L2CValue *)(local_180 + 0x10);
            lib::L2CValue::L2CValue(pLVar16,local_90._4_4_);
            lib::L2CValue::L2CValue(aLStack352,(float)uStack136);
            lib::L2CValue::operator_(pLVar8,(L2CValue *)(auStack400 + 0x10));
            lib::L2CValue::operator_(pLVar9,pLVar16);
            lib::L2CValue::operator_(pLVar10,aLStack352);
            lib::L2CValue::_L2CValue(aLStack352);
            lib::L2CValue::_L2CValue(pLVar16);
            lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
            lib::L2CValue::_L2CValue(aLStack240);
            lib::L2CValue::L2CValue
                      ((L2CValue *)(auStack400 + 0x10),
                       _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_CENTER_X);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
            fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar4);
            lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar18);
            lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
            fVar18 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar17);
            lib::L2CValue::L2CValue(aLStack240,fVar18);
            lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0x1018dfb2f4);
            lib::L2CValue::L2CValue((L2CValue *)auStack272,0x1cbd68dfbb);
            uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
            uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack272);
            fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7);
            lib::L2CValue::L2CValue(aLStack256,fVar18);
            lib::L2CValue::_L2CValue((L2CValue *)auStack272);
            lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
            lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),1.0);
            uVar6 = lib::L2CValue::operator__(aLStack240,(L2CValue *)(auStack400 + 0x10));
            lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
            if ((uVar6 & 1) == 0) {
LAB_710000bb08:
              lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),-1.0);
              uVar6 = lib::L2CValue::operator__(aLStack240,(L2CValue *)(auStack400 + 0x10));
              lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
              if ((uVar6 & 1) != 0) {
                pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack224,0x18cdc1683);
                uVar6 = lib::L2CValue::operator_((L2CValue *)&local_90,pLVar16);
                if ((uVar6 & 1) != 0) goto LAB_710000bb54;
              }
              lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0.0);
              lib::L2CValue::L2CValue
                        ((L2CValue *)auStack272,
                         _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_ADD_DEGREE);
              fVar18 = (float)lib::L2CValue::as_number((L2CValue *)(auStack400 + 0x10));
              iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack272);
              app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar4);
              lib::L2CValue::_L2CValue((L2CValue *)auStack272);
              puVar15 = (undefined8 *)(auStack400 + 0x10);
            }
            else {
              pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack224,0x18cdc1683);
              uVar6 = lib::L2CValue::operator_(pLVar16,(L2CValue *)&local_90);
              if ((uVar6 & 1) == 0) goto LAB_710000bb08;
LAB_710000bb54:
              lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0x1018dfb2f4);
              lib::L2CValue::L2CValue((L2CValue *)auStack400,0x18ec4fe627);
              uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
              uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack400);
              fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7)
              ;
              lib::L2CValue::L2CValue((L2CValue *)auStack272,fVar18);
              lib::L2CValue::_L2CValue((L2CValue *)auStack400);
              lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
              lib::L2CValue::L2CValue
                        ((L2CValue *)(auStack400 + 0x10),
                         _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_ADD_DEGREE);
              fVar18 = (float)lib::L2CValue::as_number((L2CValue *)auStack272);
              iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
              app::lua_bind::WorkModule__add_float_impl(*ppBVar17,fVar18,iVar4);
              lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
              lib::L2CValue::L2CValue
                        (aLStack416,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_ADD_DEGREE);
              iVar4 = lib::L2CValue::as_integer(aLStack416);
              fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar4);
              lib::L2CValue::L2CValue((L2CValue *)auStack400,fVar18);
              lib::L2CValue::operator_((L2CValue *)auStack208,(L2CValue *)auStack400);
              uVar6 = lib::L2CValue::operator_(aLStack256,(L2CValue *)(auStack400 + 0x10));
              lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
              lib::L2CValue::_L2CValue((L2CValue *)auStack400);
              lib::L2CValue::_L2CValue(aLStack416);
              if ((uVar6 & 1) != 0) {
                lib::L2CValue::operator_(aLStack256,(L2CValue *)auStack208);
                lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0.0);
                lib::L2CValue::operator_(aLStack416,(L2CValue *)(auStack400 + 0x10));
                lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
                lib::L2CValue::L2CValue
                          ((L2CValue *)(auStack400 + 0x10),
                           _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_ADD_DEGREE);
                fVar18 = (float)lib::L2CValue::as_number((L2CValue *)auStack400);
                iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
                app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar4);
                lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
                lib::L2CValue::_L2CValue((L2CValue *)auStack400);
                lib::L2CValue::_L2CValue(aLStack416);
              }
              puVar15 = auStack272;
            }
            lib::L2CValue::_L2CValue((L2CValue *)puVar15);
            lib::L2CValue::L2CValue
                      ((L2CValue *)auStack400,
                       _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_ADD_DEGREE);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack400);
            fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar4);
            lib::L2CValue::L2CValue((L2CValue *)auStack272,fVar18);
            lib::L2CValue::operator_(aLStack176,(L2CValue *)auStack272);
            lib::L2CValue::operator_(aLStack176,(L2CValue *)(auStack400 + 0x10));
            lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
            lib::L2CValue::_L2CValue((L2CValue *)auStack272);
            lib::L2CValue::_L2CValue((L2CValue *)auStack400);
            uVar6 = lib::L2CValue::operator_(aLStack256,aLStack176);
            if ((uVar6 & 1) != 0) {
              lib::L2CValue::operator_(aLStack176,aLStack256);
            }
            lib::L2CValue::_L2CValue(aLStack256);
            lib::L2CValue::_L2CValue(aLStack240);
            lib::L2CValue::_L2CValue((L2CValue *)&local_90);
            lib::L2CValue::_L2CValue((L2CValue *)auStack224);
            pLVar16 = (L2CValue *)auStack208;
            goto LAB_710000bdd4;
          }
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack208,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_CHANGE_MOTION);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack208);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar4);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),false);
          uVar6 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)auStack208);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1018dfb2f4);
            lib::L2CValue::L2CValue((L2CValue *)auStack208,0x157de69c60);
            uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
            uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack208);
            fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7);
            lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),fVar18);
            lib::L2CValue::_L2CValue((L2CValue *)auStack208);
            lib::L2CValue::_L2CValue((L2CValue *)&local_90);
            lib::L2CValue::L2CValue
                      ((L2CValue *)auStack224,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_SPEED_Y);
            pLVar16 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack224);
            fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,(int)pLVar16);
            lib::L2CValue::L2CValue((L2CValue *)auStack208,fVar18);
            lib::L2CAgent::math_abs((L2CAgent *)auStack208,pLVar16);
            lib::L2CValue::_L2CValue((L2CValue *)auStack208);
            lib::L2CValue::_L2CValue((L2CValue *)auStack224);
            lib::L2CValue::operator_((L2CValue *)(auStack400 + 0x10),(L2CValue *)&local_90);
            lib::L2CValue::operator_(aLStack176,(L2CValue *)auStack208);
            goto LAB_710000b7bc;
          }
        }
LAB_710000bdd8:
        lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_INT_GROUND_HIT_COUNT
                  );
        iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar17,iVar4,iVar5);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        puVar15 = (undefined8 *)(auStack400 + 0x10);
      }
      else {
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack208,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_GROUND_SE);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack208);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),false);
        uVar6 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)auStack208);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0x1584baa79c);
          HVar13 = lib::L2CValue::as_hash((L2CValue *)(auStack400 + 0x10));
          iVar4 = app::lua_bind::SoundModule__play_se_impl
                            (*ppBVar17,HVar13,true,false,false,false,0);
          lib::L2CValue::L2CValue(aLStack288,iVar4);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::L2CValue
                    ((L2CValue *)(auStack400 + 0x10),
                     _FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_GROUND_SE);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar17,iVar4);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        }
        lib::L2CValue::L2CValue
                  ((L2CValue *)(auStack400 + 0x10),_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_GROUND
                  );
        iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar17,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0x1018dfb2f4);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1060c3a71d);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
        uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar17,uVar6,uVar7);
        lib::L2CValue::L2CValue((L2CValue *)auStack208,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::L2CValue
                  ((L2CValue *)(auStack400 + 0x10),
                   _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_INT_GROUND_HIT_COUNT);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
        app::lua_bind::WorkModule__inc_int_impl(*ppBVar17,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::L2CValue((L2CValue *)auStack224,false);
        lib::L2CValue::L2CValue(aLStack304,0.0);
        lib::L2CValue::L2CValue(aLStack320,0.0);
        lib::L2CValue::L2CValue(aLStack336,0.0);
        lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
        pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
        lib::L2CValue::L2CValue(aLStack256,0x31d39a761);
        pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
        pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
        HVar13 = lib::L2CValue::as_hash(aLStack256);
        uVar6 = lib::L2CValue::as_number(pLVar16);
        lVar23 = lib::L2CValue::as_number(pLVar11);
        uVar21 = lib::L2CValue::as_number(pLVar12);
        local_90 = (BattleObjectModuleAccessor *)(uVar6 & 0xffffffff | lVar23 << 0x20);
        uStack136 = (ulong)uVar21;
        app::lua_bind::ModelModule__joint_global_position_impl
                  (*ppBVar17,HVar13,(Vector3f *)&local_90,true);
        lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),(float)local_90);
        pLVar16 = (L2CValue *)(local_180 + 0x10);
        lib::L2CValue::L2CValue(pLVar16,local_90._4_4_);
        lib::L2CValue::L2CValue(aLStack352,(float)uStack136);
        lib::L2CValue::operator_(pLVar8,(L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::operator_(pLVar9,pLVar16);
        lib::L2CValue::operator_(pLVar10,aLStack352);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(pLVar16);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::L2CValue
                  ((L2CValue *)(auStack400 + 0x10),
                   _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_CENTER_X);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
        fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar18);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::L2CValue
                  ((L2CValue *)(auStack400 + 0x10),
                   _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_CENTER_Y);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
        fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar4);
        lib::L2CValue::L2CValue(aLStack256,fVar18);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        fVar18 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar17);
        lib::L2CValue::L2CValue((L2CValue *)auStack272,fVar18);
        lib::L2CValue::L2CValue
                  ((L2CValue *)(auStack400 + 0x10),
                   _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_TOP_DEGREE);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
        fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)auStack400,fVar18);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0.0);
        pLVar16 = (L2CValue *)(auStack400 + 0x10);
        uVar6 = lib::L2CValue::operator__((L2CValue *)auStack400,pLVar16);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        if ((uVar6 & 1) == 0) {
          lib::L2CAgent::math_rad((L2CAgent *)auStack400,pLVar16);
          fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
          fVar19 = (float)lib::L2CValue::as_number(aLStack256);
          fVar20 = (float)lib::L2CValue::as_number(aLStack416);
          uVar22 = app::sv_math::vec2_rot(fVar18,fVar19,fVar20);
          lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),(float)uVar22);
          pLVar16 = (L2CValue *)(local_180 + 0x10);
          lib::L2CValue::L2CValue(pLVar16,(float)((ulong)uVar22 >> 0x20));
          lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::operator_(aLStack256,pLVar16);
          lib::L2CValue::_L2CValue(pLVar16);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::_L2CValue(aLStack416);
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
          pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
          pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
          pLVar11 = (L2CValue *)0x1fbdb2615;
          pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
          lib::L2CAgent::math_rad((L2CAgent *)auStack400,pLVar11);
          fVar18 = (float)lib::L2CValue::as_number(pLVar16);
          fVar19 = (float)lib::L2CValue::as_number(pLVar10);
          fVar20 = (float)lib::L2CValue::as_number(aLStack416);
          uVar22 = app::sv_math::vec2_rot(fVar18,fVar19,fVar20);
          lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),(float)uVar22);
          pLVar16 = (L2CValue *)(local_180 + 0x10);
          lib::L2CValue::L2CValue(pLVar16,(float)((ulong)uVar22 >> 0x20));
          lib::L2CValue::operator_(pLVar8,(L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::operator_(pLVar9,pLVar16);
          lib::L2CValue::_L2CValue(pLVar16);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::_L2CValue(aLStack416);
        }
        lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),1.0);
        uVar6 = lib::L2CValue::operator__((L2CValue *)auStack272,(L2CValue *)(auStack400 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        if ((uVar6 & 1) == 0) {
LAB_7100009c30:
          lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),-1.0);
          uVar6 = lib::L2CValue::operator__((L2CValue *)auStack272,(L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
          if ((uVar6 & 1) != 0) {
            pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
            uVar6 = lib::L2CValue::operator__(pLVar16,(L2CValue *)&local_90);
            if ((uVar6 & 1) != 0) goto LAB_7100009c78;
          }
        }
        else {
          pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
          uVar6 = lib::L2CValue::operator__((L2CValue *)&local_90,pLVar16);
          if ((uVar6 & 1) == 0) goto LAB_7100009c30;
LAB_7100009c78:
          bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack224);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue
                      ((L2CValue *)(auStack400 + 0x10),
                       _FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_GROUND_TILT);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar17,iVar4);
            lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
            lib::L2CValue::L2CValue
                      ((L2CValue *)(auStack400 + 0x10),_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_TILT);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
            app::lua_bind::WorkModule__off_flag_impl(*ppBVar17,iVar4);
            lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
            lib::L2CValue::L2CValue
                      ((L2CValue *)(auStack400 + 0x10),
                       _FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_HIT_GROUND_SE);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
            app::lua_bind::WorkModule__off_flag_impl(*ppBVar17,iVar4);
            lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
          }
        }
        lib::L2CValue::_L2CValue((L2CValue *)auStack400);
        lib::L2CValue::_L2CValue((L2CValue *)auStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue((L2CValue *)auStack224);
        puVar15 = (undefined8 *)auStack208;
      }
      goto LAB_7100009fdc;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0x1018dfb2f4);
    lib::L2CValue::L2CValue((L2CValue *)auStack208,0x157de69c60);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
    uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack208);
    fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar18);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack224,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_SPEED_Y);
    pLVar16 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack224);
    fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,(int)pLVar16);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),fVar18);
    lib::L2CAgent::math_abs((L2CAgent *)(auStack400 + 0x10),pLVar16);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack224);
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack400 + 0x10),
               _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_TOP_DEGREE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
    fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack224,fVar18);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    FUN_710000cbb0(aLStack240,this);
    uVar6 = lib::L2CValue::operator_((L2CValue *)auStack224,aLStack240);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)auStack208);
      lib::L2CValue::operator_(aLStack256);
      lib::L2CValue::operator_(aLStack176,(L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::operator_((L2CValue *)auStack224,aLStack176);
      uVar6 = lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),aLStack240);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::operator_((L2CValue *)auStack224,aLStack240);
        lib::L2CValue::operator_((L2CValue *)auStack272);
        lib::L2CValue::operator_(aLStack176,aLStack256);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue((L2CValue *)auStack272);
        lib::L2CValue::L2CValue(aLStack256,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_BACK_TILT);
        iVar4 = lib::L2CValue::as_integer(aLStack256);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar17,iVar4);
        goto LAB_7100009df4;
      }
    }
    else {
      lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)auStack208);
      lib::L2CValue::operator_(aLStack176,(L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::operator_((L2CValue *)auStack224,aLStack176);
      uVar6 = lib::L2CValue::operator__(aLStack240,(L2CValue *)(auStack400 + 0x10));
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::operator_(aLStack240,(L2CValue *)auStack224);
        lib::L2CValue::operator_(aLStack176,aLStack256);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::L2CValue(aLStack256,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_BACK_TILT);
        iVar4 = lib::L2CValue::as_integer(aLStack256);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar17,iVar4);
LAB_7100009df4:
        lib::L2CValue::_L2CValue(aLStack256);
      }
    }
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::operator_((L2CValue *)auStack224,aLStack176);
    lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0.0);
    lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack400 + 0x10),
               _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_TOP_DEGREE);
    fVar18 = (float)lib::L2CValue::as_number(aLStack256);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
    app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0.0);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue(aLStack240);
    puVar15 = auStack224;
LAB_7100009fcc:
    lib::L2CValue::_L2CValue((L2CValue *)puVar15);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    puVar15 = &local_90;
LAB_7100009fdc:
    lib::L2CValue::_L2CValue((L2CValue *)puVar15);
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack208,false);
  lib::L2CValue::L2CValue(aLStack480,0.0);
  lib::L2CValue::L2CValue(aLStack496,0.0);
  lib::L2CValue::L2CValue(aLStack512,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0x0);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack480);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack224,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack224,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack224,0x162d277af);
  lib::L2CValue::L2CValue(aLStack240,0x31d39a761);
  pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack224,0x18cdc1683);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack224,0x1fbdb2615);
  pLVar12 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack224,0x162d277af);
  HVar13 = lib::L2CValue::as_hash(aLStack240);
  uVar6 = lib::L2CValue::as_number(pLVar16);
  lVar23 = lib::L2CValue::as_number(pLVar11);
  uVar21 = lib::L2CValue::as_number(pLVar12);
  local_90 = (BattleObjectModuleAccessor *)(uVar6 & 0xffffffff | lVar23 << 0x20);
  uStack136 = (ulong)uVar21;
  app::lua_bind::ModelModule__joint_global_position_impl
            (*ppBVar17,HVar13,(Vector3f *)&local_90,true);
  lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),(float)local_90);
  pLVar16 = (L2CValue *)(local_180 + 0x10);
  lib::L2CValue::L2CValue(pLVar16,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack352,(float)uStack136);
  lib::L2CValue::operator_(pLVar8,(L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::operator_(pLVar9,pLVar16);
  lib::L2CValue::operator_(pLVar10,aLStack352);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(pLVar16);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_INT_TILT_INIT_STATUS);
  iVar4 = lib::L2CValue::as_integer(aLStack240);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar17,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),_FIGHTER_PACKUN_TILT_INIT_STATUS_NONE);
  uVar6 = lib::L2CValue::operator_((L2CValue *)(auStack400 + 0x10),(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_INT_TILT_INIT_STATUS);
    iVar4 = lib::L2CValue::as_integer(aLStack256);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar17,iVar4);
    lib::L2CValue::L2CValue(aLStack240,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),_FIGHTER_PACKUN_TILT_INIT_STATUS_SET);
    uVar6 = lib::L2CValue::operator__(aLStack240,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar6 & 1) != 0) {
      pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar16,(L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)(auStack400 + 0x10),
                   _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_TOP_DEGREE);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
        fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar4);
        lib::L2CValue::L2CValue(aLStack240,fVar18);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
        FUN_710000cbb0(aLStack256,this);
        uVar6 = lib::L2CValue::operator__(aLStack240,aLStack256);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::operator_(aLStack256,aLStack240);
          lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0.0);
          lib::L2CValue::operator_(aLStack256,(L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::L2CValue
                    ((L2CValue *)(auStack400 + 0x10),
                     _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_TOP_DEGREE);
          fVar18 = (float)lib::L2CValue::as_number((L2CValue *)auStack400);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
          app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar4);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)auStack400);
          lib::L2CValue::operator_(aLStack176,(L2CValue *)auStack272);
          lib::L2CValue::operator_(aLStack176,(L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),true);
          lib::L2CValue::operator_((L2CValue *)auStack208,(L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)auStack272);
        }
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
      }
      lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),true);
      lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    }
    pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar16,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),true);
      lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    }
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack400 + 0x10),
                 _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_INT_TILT_INIT_STATUS);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
      app::lua_bind::WorkModule__inc_int_impl(*ppBVar17,iVar4);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),_FIGHTER_PACKUN_TILT_INIT_STATUS_NONE)
      ;
      lib::L2CValue::L2CValue
                (aLStack240,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_INT_TILT_INIT_STATUS);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
      iVar5 = lib::L2CValue::as_integer(aLStack240);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar17,iVar4,iVar5);
      lib::L2CValue::_L2CValue(aLStack240);
    }
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_BACK_TILT);
  iVar4 = lib::L2CValue::as_integer(aLStack240);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),false);
  uVar6 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((uVar6 & 1) != 0) {
    FUN_710000cbb0(&local_90,this);
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack400 + 0x10),
               _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_TOP_DEGREE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
    fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar4);
    lib::L2CValue::L2CValue(aLStack240,fVar18);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::operator__((L2CValue *)&local_90,aLStack240);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0.0);
    lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack400 + 0x10),
               _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_TOP_DEGREE);
    fVar18 = (float)lib::L2CValue::as_number(aLStack256);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
    app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::operator_(aLStack160,aLStack176);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
  FUN_7100007c20(this);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  HVar13 = lib::L2CValue::as_hash((L2CValue *)&local_90);
  uVar6 = lib::L2CValue::as_number(aLStack160);
  lVar23 = lib::L2CValue::as_number(aLStack240);
  uVar21 = lib::L2CValue::as_number(aLStack256);
  local_180._0_8_ = (Hash40MapEntry **)(uVar6 & 0xffffffff | lVar23 << 0x20);
  local_180._8_8_ = (ulong)uVar21;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*ppBVar17,HVar13,(Vector3f *)(auStack400 + 0x10),0,0);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0.0);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack400 + 0x10),_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_DEGREE);
  fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
  app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0x3544447ddb);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack400 + 0x10));
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0x3486db756b);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack400 + 0x10));
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_90);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::L2CValue(aLStack240,false);
  HVar13 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar17);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,HVar13);
  lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0x11a514d9d2);
  uVar6 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
  if ((uVar6 & 1) == 0) {
    HVar13 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar17);
    lib::L2CValue::L2CValue(aLStack256,HVar13);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0x11928d91f6);
    uVar6 = lib::L2CValue::operator__(aLStack256,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar6 & 1) != 0) goto LAB_710000a8e0;
  }
  else {
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
LAB_710000a8e0:
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),true);
    lib::L2CValue::operator_(aLStack240,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack240);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),99.0);
    uVar6 = lib::L2CValue::operator_(aLStack160,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack400 + 0x10),GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FREE_Y);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_90);
      app::lua_bind::GroundModule__set_shape_flag_impl(*ppBVar17,uVar3,(bool)(bVar1 & 1));
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack400 + 0x10),GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FREE_Y);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_90);
      app::lua_bind::GroundModule__set_shape_flag_impl(*ppBVar17,uVar3,(bool)(bVar1 & 1));
    }
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack400 + 0x10),GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FREE_Y);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_90);
    app::lua_bind::GroundModule__set_shape_flag_impl(*ppBVar17,uVar3,(bool)(bVar1 & 1));
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack208);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_INT_TILT_INIT_STATUS);
    iVar4 = lib::L2CValue::as_integer(aLStack256);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar17,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),_FIGHTER_PACKUN_TILT_INIT_STATUS_NONE);
    uVar6 = lib::L2CValue::operator_((L2CValue *)(auStack400 + 0x10),(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar6 & 1) == 0) goto LAB_710000b3fc;
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_TILT_INIT_MODIFY_ROT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((bVar2 & 1U) == 0) goto LAB_710000b3fc;
    lib::L2CValue::L2CValue(aLStack624,0.0);
    lib::L2CValue::L2CValue(aLStack640,0.0);
    lib::L2CValue::L2CValue(aLStack656,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70);
    lib::L2CValue::_L2CValue(aLStack656);
    lib::L2CValue::_L2CValue(aLStack640);
    lib::L2CValue::_L2CValue(aLStack624);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x162d277af);
    lib::L2CValue::L2CValue((L2CValue *)auStack272,0x31d39a761);
    pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
    pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x162d277af);
    HVar13 = lib::L2CValue::as_hash((L2CValue *)auStack272);
    uVar6 = lib::L2CValue::as_number(pLVar16);
    lVar23 = lib::L2CValue::as_number(pLVar11);
    uVar21 = lib::L2CValue::as_number(pLVar12);
    local_90 = (BattleObjectModuleAccessor *)(uVar6 & 0xffffffff | lVar23 << 0x20);
    uStack136 = (ulong)uVar21;
    app::lua_bind::ModelModule__joint_global_position_impl
              (*ppBVar17,HVar13,(Vector3f *)&local_90,true);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),(float)local_90);
    pLVar16 = (L2CValue *)(local_180 + 0x10);
    lib::L2CValue::L2CValue(pLVar16,local_90._4_4_);
    lib::L2CValue::L2CValue(aLStack352,(float)uStack136);
    lib::L2CValue::operator_(pLVar8,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::operator_(pLVar9,pLVar16);
    lib::L2CValue::operator_(pLVar10,aLStack352);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(pLVar16);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack272);
    pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0.0);
    lib::L2CValue::operator_(pLVar16,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack400 + 0x10),
               _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_JOINT_ROT_X);
    fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
    app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0.0);
    lib::L2CValue::operator_(pLVar16,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack400 + 0x10),
               _FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_JOINT_ROT_Y);
    fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
    app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lVar23 = -0x80;
  }
  else {
    this_02 = (L2CTable *)operator_new(0x48);
    lib::L2CTable::L2CTable(this_02,0);
    lib::L2CValue::L2CValue(aLStack256,this_02);
    pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0);
    lib::L2CValue::operator_(pLVar16,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0);
    lib::L2CValue::operator_(pLVar16,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x162d277af);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0);
    lib::L2CValue::operator_(pLVar16,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x162d277af);
    pfVar14 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar17);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),*pfVar14);
    pLVar16 = (L2CValue *)(local_180 + 0x10);
    lib::L2CValue::L2CValue(pLVar16,pfVar14[1]);
    lib::L2CValue::L2CValue(aLStack352,pfVar14[2]);
    lib::L2CValue::operator_(pLVar8,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::operator_(pLVar9,pLVar16);
    lib::L2CValue::operator_(pLVar10,aLStack352);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(pLVar16);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::L2CValue(aLStack560,0.0);
    lib::L2CValue::L2CValue(aLStack576,0.0);
    lib::L2CValue::L2CValue(aLStack592,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack592);
    lib::L2CValue::_L2CValue(aLStack576);
    lib::L2CValue::_L2CValue(aLStack560);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack272,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack272,0x1fbdb2615);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack272,0x162d277af);
    lib::L2CValue::L2CValue((L2CValue *)auStack400,0x31d39a761);
    pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack272,0x18cdc1683);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack272,0x1fbdb2615);
    pLVar12 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack272,0x162d277af);
    HVar13 = lib::L2CValue::as_hash((L2CValue *)auStack400);
    uVar6 = lib::L2CValue::as_number(pLVar16);
    lVar23 = lib::L2CValue::as_number(pLVar11);
    uVar21 = lib::L2CValue::as_number(pLVar12);
    local_90 = (BattleObjectModuleAccessor *)(uVar6 & 0xffffffff | lVar23 << 0x20);
    uStack136 = (ulong)uVar21;
    app::lua_bind::ModelModule__joint_global_position_impl
              (*ppBVar17,HVar13,(Vector3f *)&local_90,true);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),(float)local_90);
    pLVar16 = (L2CValue *)(local_180 + 0x10);
    lib::L2CValue::L2CValue(pLVar16,local_90._4_4_);
    lib::L2CValue::L2CValue(aLStack352,(float)uStack136);
    lib::L2CValue::operator_(pLVar8,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::operator_(pLVar9,pLVar16);
    lib::L2CValue::operator_(pLVar10,aLStack352);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(pLVar16);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack400);
    pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack272,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack224,0x18cdc1683);
    lib::L2CValue::operator_(pLVar16,pLVar8);
    pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack272,0x1fbdb2615);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack224,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar16,pLVar8);
    lib::L2CValue::L2CValue(aLStack416,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_TILT_INIT_MODIFY_ROT);
    iVar4 = lib::L2CValue::as_integer(aLStack416);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue(aLStack416);
    if ((bVar2 & 1U) == 0) {
      pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
      lib::L2CValue::operator_(pLVar16,(L2CValue *)&local_90);
      pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
      lib::L2CValue::operator_(pLVar16,(L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
      pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar16,(L2CValue *)auStack400);
      pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar16,(L2CValue *)(auStack400 + 0x10));
    }
    else {
      lib::L2CValue::L2CValue(aLStack416,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_JOINT_ROT_X);
      iVar4 = lib::L2CValue::as_integer(aLStack416);
      fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),fVar18);
      lib::L2CValue::_L2CValue(aLStack416);
      pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack272,0x18cdc1683);
      lib::L2CValue::operator_(pLVar16,(L2CValue *)(auStack400 + 0x10));
      pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
      lib::L2CValue::operator_(pLVar16,aLStack416);
      pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
      lib::L2CValue::operator_(pLVar16,aLStack608);
      lib::L2CValue::_L2CValue(aLStack608);
      pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar16,(L2CValue *)auStack400);
      pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar16,aLStack608);
      lib::L2CValue::_L2CValue(aLStack608);
      lib::L2CValue::_L2CValue(aLStack416);
    }
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x162d277af);
    uVar6 = lib::L2CValue::as_number(pLVar16);
    lVar23 = lib::L2CValue::as_number(pLVar8);
    uVar21 = lib::L2CValue::as_number(pLVar9);
    local_180._0_8_ = (Hash40MapEntry **)(uVar6 & 0xffffffff | lVar23 << 0x20);
    local_180._8_8_ = (ulong)uVar21;
    app::lua_bind::PostureModule__set_pos_impl(*ppBVar17,(Vector3f *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack400);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lVar23 = -0x100;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar23));
  lib::L2CValue::_L2CValue(aLStack256);
LAB_710000b3fc:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

