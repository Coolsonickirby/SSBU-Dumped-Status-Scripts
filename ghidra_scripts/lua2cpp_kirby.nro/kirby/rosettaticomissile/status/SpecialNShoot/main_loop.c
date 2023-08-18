
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponKirbyRosettaticomissile::status::SpecialNShoot_main_loop
          (L2CWeaponKirbyRosettaticomissile *this,L2CValue *return_value)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  L2CValue *pLVar15;
  BattleObjectModuleAccessor *pBVar16;
  L2CValue *pLVar17;
  L2CValue *pLVar18;
  L2CValue *pLVar19;
  L2CValue *pLVar20;
  L2CValue *pLVar21;
  L2CValue *this_00;
  L2CValue *this_01;
  Hash40 HVar22;
  BattleObjectModuleAccessor **ppBVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  long lVar28;
  undefined8 uVar29;
  L2CValue aLStack1152 [16];
  L2CValue aLStack1136 [16];
  L2CValue aLStack1120 [16];
  L2CValue aLStack1104 [16];
  L2CValue aLStack1088 [16];
  undefined8 local_430;
  ulong uStack1064;
  L2CValue aLStack1056 [16];
  L2CValue aLStack1040 [16];
  L2CValue aLStack1024 [16];
  L2CValue aLStack1008 [16];
  L2CValue aLStack992 [16];
  L2CValue aLStack976 [16];
  L2CValue aLStack960 [16];
  L2CValue aLStack944 [16];
  L2CValue aLStack928 [16];
  L2CValue aLStack912 [16];
  L2CValue aLStack896 [16];
  L2CValue aLStack880 [16];
  L2CValue aLStack864 [16];
  L2CValue aLStack848 [16];
  L2CValue aLStack832 [16];
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
  L2CValue aLStack400 [16];
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
  L2CValue aLStack192 [16];
  undefined8 local_b0;
  undefined8 uStack168;
  ulong local_a0;
  undefined8 uStack152;
  ulong local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_430,false);
  lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_430);
  lib::L2CValue::_L2CValue((L2CValue *)&local_430);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar10 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  ppBVar23 = &this->moduleAccessor;
  iVar10 = app::lua_bind::WorkModule__get_int_impl(*ppBVar23,iVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_430,iVar10);
  lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_430);
  lib::L2CValue::_L2CValue((L2CValue *)&local_430);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_430,0);
  uVar12 = lib::L2CValue::operator__(aLStack240,(L2CValue *)&local_430);
  lib::L2CValue::_L2CValue((L2CValue *)&local_430);
  if ((uVar12 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_430,true);
    lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_430);
    lib::L2CValue::_L2CValue((L2CValue *)&local_430);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_WEAPON_INSTANCE_WORK_ID_INT_INIT_LIFE);
  iVar10 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  iVar10 = app::lua_bind::WorkModule__get_int_impl(*ppBVar23,iVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar10);
  lib::L2CValue::operator_((L2CValue *)&local_90,aLStack240);
  lib::L2CValue::L2CValue(aLStack304,0xaa3c06ee2);
  lib::L2CValue::L2CValue(aLStack320,0x1be8cf850b);
  uVar12 = lib::L2CValue::as_integer(aLStack304);
  uVar13 = lib::L2CValue::as_integer(aLStack320);
  iVar10 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar23,uVar12,uVar13);
  lib::L2CValue::L2CValue((L2CValue *)&local_b0,iVar10);
  uVar12 = lib::L2CValue::operator__((L2CValue *)&local_b0,(L2CValue *)&local_430);
  lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue((L2CValue *)&local_430);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  if ((uVar12 & 1) == 0) goto LAB_710023f8a8;
  iVar10 = app::lua_bind::GroundModule__get_touch_flag_impl(*ppBVar23);
  lib::L2CValue::L2CValue((L2CValue *)&local_430,iVar10);
  lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_430);
  lib::L2CValue::_L2CValue((L2CValue *)&local_430);
  lib::L2CValue::L2CValue((L2CValue *)&local_430,0);
  uVar12 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_430);
  lib::L2CValue::_L2CValue((L2CValue *)&local_430);
  if ((uVar12 & 1) != 0) goto LAB_710023f8a8;
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0xaa3c06ee2);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x16b914c9d1);
  uVar12 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  uVar13 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar24 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar23,uVar12,uVar13);
  lib::L2CValue::L2CValue((L2CValue *)&local_430,fVar24);
  lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_430);
  lib::L2CValue::_L2CValue((L2CValue *)&local_430);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  fVar24 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar23);
  lib::L2CValue::L2CValue((L2CValue *)&local_430,fVar24);
  lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_430);
  lib::L2CValue::_L2CValue((L2CValue *)&local_430);
  lib::L2CValue::L2CValue((L2CValue *)&local_430,_GROUND_TOUCH_FLAG_LEFT);
  lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_430);
  lib::L2CValue::_L2CValue((L2CValue *)&local_430);
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
  if ((bVar1 & 1U) == 0) {
    bVar1 = false;
LAB_710023f2e0:
    lib::L2CValue::L2CValue((L2CValue *)&local_430,GROUND_TOUCH_FLAG_RIGHT);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_430);
    lib::L2CValue::_L2CValue((L2CValue *)&local_430);
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_a0);
    if ((bVar2 & 1U) == 0) {
      bVar2 = false;
LAB_710023f368:
      lib::L2CValue::L2CValue((L2CValue *)&local_430,GROUND_TOUCH_FLAG_DOWN);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_430);
      lib::L2CValue::_L2CValue((L2CValue *)&local_430);
      bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_b0);
      if ((bVar3 & 1U) == 0) {
        bVar3 = false;
LAB_710023f3f0:
        lib::L2CValue::L2CValue((L2CValue *)&local_430,_GROUND_TOUCH_FLAG_UP);
        lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_430);
        lib::L2CValue::_L2CValue((L2CValue *)&local_430);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack496);
        if ((bVar4 & 1U) == 0) {
          bVar4 = false;
LAB_710023f478:
          lib::L2CValue::L2CValue((L2CValue *)&local_430,GROUND_TOUCH_FLAG_UP_LEFT);
          lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_430);
          lib::L2CValue::_L2CValue((L2CValue *)&local_430);
          bVar5 = lib::L2CValue::operator_cast_to_bool(aLStack576);
          if ((bVar5 & 1U) == 0) {
            bVar5 = false;
LAB_710023f500:
            lib::L2CValue::L2CValue((L2CValue *)&local_430,GROUND_TOUCH_FLAG_UP_RIGHT);
            lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_430);
            lib::L2CValue::_L2CValue((L2CValue *)&local_430);
            bVar6 = lib::L2CValue::operator_cast_to_bool(aLStack656);
            if ((bVar6 & 1U) == 0) {
              bVar6 = false;
LAB_710023f58c:
              lib::L2CValue::L2CValue((L2CValue *)&local_430,_GROUND_TOUCH_FLAG_DOWN_LEFT);
              lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_430);
              lib::L2CValue::_L2CValue((L2CValue *)&local_430);
              bVar7 = lib::L2CValue::operator_cast_to_bool(aLStack736);
              if ((bVar7 & 1U) == 0) {
                bVar7 = false;
LAB_710023f618:
                lib::L2CValue::L2CValue((L2CValue *)&local_430,_GROUND_TOUCH_FLAG_DOWN_RIGHT);
                lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_430);
                lib::L2CValue::_L2CValue((L2CValue *)&local_430);
                bVar8 = lib::L2CValue::operator_cast_to_bool(aLStack816);
                if ((bVar8 & 1U) == 0) {
                  lib::L2CValue::_L2CValue(aLStack816);
                  bVar9 = 0;
                  if (!bVar7) goto LAB_710023f6bc;
                  goto LAB_710023f720;
                }
                lib::L2CValue::L2CValue(aLStack832,_GROUND_TOUCH_FLAG_DOWN_RIGHT);
                lib::L2CValue::L2CValue(aLStack848,aLStack272);
                lib::L2CValue::L2CValue(aLStack864,aLStack288);
                FUN_7100240bb0(&local_430,this,aLStack832,aLStack848,aLStack864);
                bVar9 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_430);
                lib::L2CValue::_L2CValue((L2CValue *)&local_430);
                lib::L2CValue::_L2CValue(aLStack864);
                lib::L2CValue::_L2CValue(aLStack848);
                lib::L2CValue::_L2CValue(aLStack832);
                lib::L2CValue::_L2CValue(aLStack816);
                if (bVar7) goto LAB_710023f720;
LAB_710023f6bc:
                lib::L2CValue::_L2CValue(aLStack736);
              }
              else {
                lib::L2CValue::L2CValue(aLStack768,_GROUND_TOUCH_FLAG_DOWN_LEFT);
                lib::L2CValue::L2CValue(aLStack784,aLStack272);
                lib::L2CValue::L2CValue(aLStack800,aLStack288);
                FUN_7100240bb0(aLStack752,this,aLStack768,aLStack784,aLStack800);
                bVar8 = lib::L2CValue::operator_cast_to_bool(aLStack752);
                bVar7 = true;
                bVar9 = 1;
                if ((bVar8 & 1U) == 0) goto LAB_710023f618;
LAB_710023f720:
                lib::L2CValue::_L2CValue(aLStack752);
                lib::L2CValue::_L2CValue(aLStack800);
                lib::L2CValue::_L2CValue(aLStack784);
                lib::L2CValue::_L2CValue(aLStack768);
                lib::L2CValue::_L2CValue(aLStack736);
              }
              if (bVar6) goto LAB_710023f750;
              lib::L2CValue::_L2CValue(aLStack656);
            }
            else {
              lib::L2CValue::L2CValue(aLStack688,GROUND_TOUCH_FLAG_UP_RIGHT);
              lib::L2CValue::L2CValue(aLStack704,aLStack272);
              lib::L2CValue::L2CValue(aLStack720,aLStack288);
              FUN_7100240bb0(aLStack672,this,aLStack688,aLStack704,aLStack720);
              bVar7 = lib::L2CValue::operator_cast_to_bool(aLStack672);
              bVar6 = true;
              bVar9 = 1;
              if ((bVar7 & 1U) == 0) goto LAB_710023f58c;
LAB_710023f750:
              lib::L2CValue::_L2CValue(aLStack672);
              lib::L2CValue::_L2CValue(aLStack720);
              lib::L2CValue::_L2CValue(aLStack704);
              lib::L2CValue::_L2CValue(aLStack688);
              lib::L2CValue::_L2CValue(aLStack656);
            }
            if (bVar5) goto LAB_710023f780;
            lib::L2CValue::_L2CValue(aLStack576);
          }
          else {
            lib::L2CValue::L2CValue(aLStack608,GROUND_TOUCH_FLAG_UP_LEFT);
            lib::L2CValue::L2CValue(aLStack624,aLStack272);
            lib::L2CValue::L2CValue(aLStack640,aLStack288);
            FUN_7100240bb0(aLStack592,this,aLStack608,aLStack624,aLStack640);
            bVar6 = lib::L2CValue::operator_cast_to_bool(aLStack592);
            bVar5 = true;
            bVar9 = 1;
            if ((bVar6 & 1U) == 0) goto LAB_710023f500;
LAB_710023f780:
            lib::L2CValue::_L2CValue(aLStack592);
            lib::L2CValue::_L2CValue(aLStack640);
            lib::L2CValue::_L2CValue(aLStack624);
            lib::L2CValue::_L2CValue(aLStack608);
            lib::L2CValue::_L2CValue(aLStack576);
          }
          if (bVar4) goto LAB_710023f7ac;
          lib::L2CValue::_L2CValue(aLStack496);
        }
        else {
          lib::L2CValue::L2CValue(aLStack528,_GROUND_TOUCH_FLAG_UP);
          lib::L2CValue::L2CValue(aLStack544,aLStack272);
          lib::L2CValue::L2CValue(aLStack560,aLStack288);
          FUN_7100240bb0(aLStack512,this,aLStack528,aLStack544,aLStack560);
          bVar5 = lib::L2CValue::operator_cast_to_bool(aLStack512);
          bVar4 = true;
          bVar9 = 1;
          if ((bVar5 & 1U) == 0) goto LAB_710023f478;
LAB_710023f7ac:
          lib::L2CValue::_L2CValue(aLStack512);
          lib::L2CValue::_L2CValue(aLStack560);
          lib::L2CValue::_L2CValue(aLStack544);
          lib::L2CValue::_L2CValue(aLStack528);
          lib::L2CValue::_L2CValue(aLStack496);
        }
        if (bVar3) goto LAB_710023f7d8;
        lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack448,GROUND_TOUCH_FLAG_DOWN);
        lib::L2CValue::L2CValue(aLStack464,aLStack272);
        lib::L2CValue::L2CValue(aLStack480,aLStack288);
        FUN_7100240bb0(aLStack432,this,aLStack448,aLStack464,aLStack480);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack432);
        bVar3 = true;
        bVar9 = 1;
        if ((bVar4 & 1U) == 0) goto LAB_710023f3f0;
LAB_710023f7d8:
        lib::L2CValue::_L2CValue(aLStack432);
        lib::L2CValue::_L2CValue(aLStack480);
        lib::L2CValue::_L2CValue(aLStack464);
        lib::L2CValue::_L2CValue(aLStack448);
        lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
      }
      if (bVar2) goto LAB_710023f804;
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack384,GROUND_TOUCH_FLAG_RIGHT);
      lib::L2CValue::L2CValue(aLStack400,aLStack272);
      lib::L2CValue::L2CValue(aLStack416,aLStack288);
      FUN_7100240bb0(aLStack320,this,aLStack384,aLStack400,aLStack416);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack320);
      bVar2 = true;
      bVar9 = 1;
      if ((bVar3 & 1U) == 0) goto LAB_710023f368;
LAB_710023f804:
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    }
    if (bVar1) {
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((bVar9 & 1) == 0) goto LAB_710023f8a8;
  }
  else {
    lib::L2CValue::L2CValue(aLStack336,_GROUND_TOUCH_FLAG_LEFT);
    lib::L2CValue::L2CValue(aLStack352,aLStack272);
    lib::L2CValue::L2CValue(aLStack368,aLStack288);
    FUN_7100240bb0(aLStack304,this,aLStack336,aLStack352,aLStack368);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack304);
    if ((bVar1 & 1U) == 0) {
      bVar1 = true;
      goto LAB_710023f2e0;
    }
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_430,_WEAPON_ROSETTA_TICO_STATUS_SPECIAL_N_SHOOT_WORK_FLAG_HIT);
  iVar10 = lib::L2CValue::as_integer((L2CValue *)&local_430);
  app::lua_bind::WorkModule__on_flag_impl(*ppBVar23,iVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_430);
  lib::L2CValue::L2CValue((L2CValue *)&local_430,true);
  lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_430);
  lib::L2CValue::_L2CValue((L2CValue *)&local_430);
LAB_710023f8a8:
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_WEAPON_ROSETTA_TICO_STATUS_SPECIAL_N_SHOOT_WORK_FLAG_HIT);
  iVar10 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar9 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar23,iVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_430,(bool)(bVar9 & 1));
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_430);
  lib::L2CValue::_L2CValue((L2CValue *)&local_430);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_430,0x25c3e81cd9);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_430);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack880);
    lib::L2CValue::_L2CValue((L2CValue *)&local_430);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_430,_WEAPON_ROSETTA_TICO_STATUS_SPECIAL_N_SHOOT_WORK_FLAG_HIT);
    iVar10 = lib::L2CValue::as_integer((L2CValue *)&local_430);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar23,iVar10);
    lib::L2CValue::_L2CValue((L2CValue *)&local_430);
  }
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack224);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,
               _WEAPON_ROSETTA_TICO_STATUS_SPECIAL_N_SHOOT_WORK_FLAG_HIT_FIGHTER);
    iVar10 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar9 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar23,iVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_430,(bool)(bVar9 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_430);
    lib::L2CValue::_L2CValue((L2CValue *)&local_430);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_430,
                 _WEAPON_ROSETTA_TICO_STATUS_SPECIAL_N_SHOOT_WORK_FLAG_HIT_FIGHTER);
      iVar10 = lib::L2CValue::as_integer((L2CValue *)&local_430);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar23,iVar10);
      lib::L2CValue::_L2CValue((L2CValue *)&local_430);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0xaa3c06ee2);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x17eeeaea50);
      uVar12 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      uVar13 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
      fVar24 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar23,uVar12,uVar13);
      lib::L2CValue::L2CValue((L2CValue *)&local_430,fVar24);
      lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_430);
      lib::L2CValue::_L2CValue((L2CValue *)&local_430);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      uVar12 = lib::L2CValue::as_number(aLStack208);
      lVar28 = lib::L2CValue::as_number(aLStack208);
      uVar25 = lib::L2CValue::as_number(aLStack208);
      local_430 = uVar12 & 0xffffffff | lVar28 << 0x20;
      uStack1064 = (ulong)uVar25;
      app::lua_bind::KineticModule__mul_speed_impl(*ppBVar23,(Vector3f *)&local_430,-1);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0xaa3c06ee2);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x185dd9299b);
      uVar12 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      uVar13 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
      fVar24 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar23,uVar12,uVar13);
      lib::L2CValue::L2CValue((L2CValue *)&local_430,fVar24);
      lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_430);
      lib::L2CValue::_L2CValue((L2CValue *)&local_430);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      fVar24 = (float)app::lua_bind::AttackModule__power_mul_status_impl(*ppBVar23);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar24);
      lib::L2CValue::operator_((L2CValue *)&local_90,aLStack256);
      fVar24 = (float)lib::L2CValue::as_number((L2CValue *)&local_430);
      app::lua_bind::AttackModule__set_power_mul_status_impl(*ppBVar23,fVar24);
      lib::L2CValue::_L2CValue((L2CValue *)&local_430);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_a0,
               _WEAPON_KIRBY_ROSETTATICOMISSILE_INSTANCE_WORK_ID_INT_SHOOT_SMOKE_FRAME);
    iVar10 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    iVar10 = app::lua_bind::WorkModule__get_int_impl(*ppBVar23,iVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_430,8);
    uVar12 = lib::L2CValue::operator__((L2CValue *)&local_430,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_430);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    if ((uVar12 & 1) != 0) {
      pfVar14 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar23);
      lib::L2CValue::L2CValue(aLStack960,*pfVar14);
      lib::L2CValue::L2CValue(aLStack944,pfVar14[1]);
      lib::L2CValue::L2CValue(aLStack928,pfVar14[2]);
      FUN_7100009380(aLStack496,this,aLStack960);
      lib::L2CValue::_L2CValue(aLStack928);
      lib::L2CValue::_L2CValue(aLStack944);
      lib::L2CValue::_L2CValue(aLStack960);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
      fVar24 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar23);
      lib::L2CValue::L2CValue(aLStack656,fVar24);
      lib::L2CValue::L2CValue((L2CValue *)&local_430,-10.0);
      lib::L2CValue::operator_((L2CValue *)&local_430,aLStack656);
      lib::L2CValue::_L2CValue((L2CValue *)&local_430);
      pLVar15 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      pBVar16 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar15);
      fVar24 = (float)app::SlopeModuleSimple::gravity_angle(pBVar16);
      lib::L2CValue::L2CValue(aLStack736,fVar24);
      fVar24 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
      fVar26 = (float)lib::L2CValue::as_number((L2CValue *)&local_b0);
      fVar27 = (float)lib::L2CValue::as_number(aLStack736);
      uVar29 = app::sv_math::vec2_rot(fVar24,fVar26,fVar27);
      lib::L2CValue::L2CValue(aLStack992,(float)uVar29);
      lib::L2CValue::L2CValue(aLStack976,(float)((ulong)uVar29 >> 0x20));
      lib::L2CValue::L2CValue((L2CValue *)&local_430,aLStack992);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,aLStack976);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xd0,(L2CValue)0x70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_430);
      lib::L2CValue::_L2CValue(aLStack976);
      lib::L2CValue::_L2CValue(aLStack992);
      lib::L2CValue::_L2CValue(aLStack736);
      lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
      lib::L2CValue::_L2CValue(aLStack656);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::L2CValue(aLStack1008,0.0);
      lib::L2CValue::L2CValue(aLStack1024,0.0);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x10,(L2CValue)0x0);
      lib::L2CValue::_L2CValue(aLStack1024);
      lib::L2CValue::_L2CValue(aLStack1008);
      lib::L2CValue::L2CValue(aLStack736,false);
      pLVar15 = (L2CValue *)lib::L2CValue::operator__(aLStack656,0x18cdc1683);
      pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack656,0x1fbdb2615);
      pLVar18 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x18cdc1683);
      pLVar19 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x1fbdb2615);
      pLVar20 = (L2CValue *)lib::L2CValue::operator__(aLStack576,0x18cdc1683);
      pLVar21 = (L2CValue *)lib::L2CValue::operator__(aLStack576,0x1fbdb2615);
      this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack656,0x18cdc1683);
      this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack656,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack816,true);
      uVar12 = lib::L2CValue::as_number(pLVar18);
      uVar25 = lib::L2CValue::as_number(pLVar19);
      local_90 = uVar12 & 0xffffffff | (ulong)uVar25 << 0x20;
      uStack136 = 0;
      uVar12 = lib::L2CValue::as_number(pLVar20);
      uVar25 = lib::L2CValue::as_number(pLVar21);
      local_a0 = uVar12 & 0xffffffff | (ulong)uVar25 << 0x20;
      uStack152 = 0;
      uVar12 = lib::L2CValue::as_number(this_00);
      uVar25 = lib::L2CValue::as_number(this_01);
      local_b0 = uVar12 & 0xffffffff | (ulong)uVar25 << 0x20;
      uStack168 = 0;
      bVar9 = lib::L2CValue::as_bool(aLStack816);
      bVar9 = app::lua_bind::GroundModule__ray_check_hit_pos_impl
                        (*ppBVar23,(Vector2f *)&local_90,(Vector2f *)&local_a0,(Vector2f *)&local_b0
                         ,(bool)(bVar9 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_430,(bool)(bVar9 & 1));
      lib::L2CValue::L2CValue(aLStack1056,(float)local_b0);
      lib::L2CValue::L2CValue(aLStack1040,local_b0._4_4_);
      lib::L2CValue::operator_(aLStack736,(L2CValue *)&local_430);
      lib::L2CValue::operator_(pLVar15,aLStack1056);
      lib::L2CValue::operator_(pLVar17,aLStack1040);
      lib::L2CValue::_L2CValue(aLStack1040);
      lib::L2CValue::_L2CValue(aLStack1056);
      lib::L2CValue::_L2CValue((L2CValue *)&local_430);
      lib::L2CValue::_L2CValue(aLStack816);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack736);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0x31ed91fca);
        lib::L2CValue::L2CValue((L2CValue *)&local_b0,0.0);
        lib::L2CValue::L2CValue(aLStack816,0.0);
        lib::L2CValue::L2CValue(aLStack1136,0.0);
        HVar22 = lib::L2CValue::as_hash((L2CValue *)&local_90);
        uVar12 = lib::L2CValue::as_number((L2CValue *)&local_b0);
        lVar28 = lib::L2CValue::as_number(aLStack816);
        uVar25 = lib::L2CValue::as_number(aLStack1136);
        local_430 = uVar12 & 0xffffffff | lVar28 << 0x20;
        uStack1064 = (ulong)uVar25;
        app::lua_bind::ModelModule__joint_global_rotation_impl
                  (*ppBVar23,HVar22,(Vector3f *)&local_430,true);
        lib::L2CValue::L2CValue(aLStack1120,(float)local_430);
        lib::L2CValue::L2CValue(aLStack1104,local_430._4_4_);
        lib::L2CValue::L2CValue(aLStack1088,(float)uStack1064);
        FUN_7100009380(&local_a0,this,aLStack1120);
        lib::L2CValue::_L2CValue(aLStack1088);
        lib::L2CValue::_L2CValue(aLStack1104);
        lib::L2CValue::_L2CValue(aLStack1120);
        lib::L2CValue::_L2CValue(aLStack1136);
        lib::L2CValue::_L2CValue(aLStack816);
        lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue((L2CValue *)&local_b0,0x16909a3bbe);
        pLVar15 = (L2CValue *)lib::L2CValue::operator__(aLStack656,0x18cdc1683);
        pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack656,0x1fbdb2615);
        pLVar18 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x162d277af);
        pLVar19 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_a0,0x18cdc1683);
        pLVar20 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_a0,0x1fbdb2615);
        pLVar21 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_a0,0x162d277af);
        HVar22 = lib::L2CValue::as_hash((L2CValue *)&local_b0);
        uVar12 = lib::L2CValue::as_number(pLVar15);
        lVar28 = lib::L2CValue::as_number(pLVar17);
        uVar25 = lib::L2CValue::as_number(pLVar18);
        local_430 = uVar12 & 0xffffffff | lVar28 << 0x20;
        uStack1064 = (ulong)uVar25;
        uVar12 = lib::L2CValue::as_number(pLVar19);
        lVar28 = lib::L2CValue::as_number(pLVar20);
        uVar25 = lib::L2CValue::as_number(pLVar21);
        local_90 = uVar12 & 0xffffffff | lVar28 << 0x20;
        uStack136 = (ulong)uVar25;
        uVar25 = app::lua_bind::EffectModule__req_impl
                           (*ppBVar23,HVar22,(Vector3f *)&local_430,(Vector3f *)&local_90,1.0,0,-1,
                            false,0);
        lib::L2CValue::L2CValue(aLStack1152,uVar25);
        lib::L2CValue::_L2CValue(aLStack1152);
        lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_430,0);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,
                 _WEAPON_KIRBY_ROSETTATICOMISSILE_INSTANCE_WORK_ID_INT_SHOOT_SMOKE_FRAME);
      iVar10 = lib::L2CValue::as_integer((L2CValue *)&local_430);
      iVar11 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar23,iVar10,iVar11);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_430);
      lib::L2CValue::_L2CValue(aLStack736);
      lib::L2CValue::_L2CValue(aLStack656);
      lib::L2CValue::_L2CValue(aLStack576);
      lib::L2CValue::_L2CValue(aLStack496);
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack896,_WEAPON_KIRBY_ROSETTATICOMISSILE_STATUS_KIND_SPECIAL_N_END);
    lib::L2CValue::L2CValue(aLStack912,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
    lib::L2CValue::_L2CValue(aLStack912);
    lib::L2CValue::_L2CValue(aLStack896);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  return;
}

