
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRosettaTico::status::SpecialNShoot_main_loop
          (L2CWeaponRosettaTico *this,L2CValue *return_value)

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
  Hash40 HVar14;
  ulong *this_00;
  float *pfVar15;
  L2CValue *pLVar16;
  BattleObjectModuleAccessor *pBVar17;
  L2CValue *pLVar18;
  L2CValue *pLVar19;
  L2CValue *pLVar20;
  L2CValue *pLVar21;
  L2CValue *pLVar22;
  L2CValue *this_01;
  L2CValue *this_02;
  BattleObjectModuleAccessor **ppBVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  long lVar28;
  undefined8 uVar29;
  L2CValue aLStack1120 [16];
  L2CValue aLStack1104 [16];
  L2CValue aLStack1088 [16];
  L2CValue aLStack1072 [16];
  undefined8 local_420;
  ulong uStack1048;
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
  undefined8 local_c0;
  undefined8 uStack184;
  ulong local_b0;
  undefined8 uStack168;
  ulong local_a0;
  ulong uStack152;
  
  lib::L2CValue::L2CValue(aLStack208,false);
  lib::L2CValue::L2CValue((L2CValue *)&local_420,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar10 = lib::L2CValue::as_integer((L2CValue *)&local_420);
  ppBVar23 = &this->moduleAccessor;
  iVar10 = app::lua_bind::WorkModule__get_int_impl(*ppBVar23,iVar10);
  lib::L2CValue::L2CValue(aLStack224,iVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_420);
  lib::L2CValue::L2CValue((L2CValue *)&local_420,0);
  uVar12 = lib::L2CValue::operator__(aLStack224,(L2CValue *)&local_420);
  lib::L2CValue::_L2CValue((L2CValue *)&local_420);
  if ((uVar12 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_420,true);
    lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_420);
    lib::L2CValue::_L2CValue((L2CValue *)&local_420);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_b0,_WEAPON_INSTANCE_WORK_ID_INT_INIT_LIFE);
  iVar10 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
  iVar10 = app::lua_bind::WorkModule__get_int_impl(*ppBVar23,iVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,iVar10);
  lib::L2CValue::operator_((L2CValue *)&local_a0,aLStack224);
  lib::L2CValue::L2CValue(aLStack240,0xaa3c06ee2);
  lib::L2CValue::L2CValue(aLStack256,0x1be8cf850b);
  uVar12 = lib::L2CValue::as_integer(aLStack240);
  uVar13 = lib::L2CValue::as_integer(aLStack256);
  iVar10 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar23,uVar12,uVar13);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,iVar10);
  uVar12 = lib::L2CValue::operator__((L2CValue *)&local_c0,(L2CValue *)&local_420);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_420);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
  if ((uVar12 & 1) != 0) {
    iVar10 = app::lua_bind::GroundModule__get_touch_flag_impl(*ppBVar23);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,iVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_420,0);
    uVar12 = lib::L2CValue::operator__((L2CValue *)&local_a0,(L2CValue *)&local_420);
    lib::L2CValue::_L2CValue((L2CValue *)&local_420);
    if ((uVar12 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_420,0xaa3c06ee2);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,0x16b914c9d1);
      uVar12 = lib::L2CValue::as_integer((L2CValue *)&local_420);
      uVar13 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
      fVar24 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar23,uVar12,uVar13);
      lib::L2CValue::L2CValue((L2CValue *)&local_b0,fVar24);
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_420);
      fVar24 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar23);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,fVar24);
      lib::L2CValue::L2CValue((L2CValue *)&local_420,_GROUND_TOUCH_FLAG_LEFT);
      lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)&local_420);
      lib::L2CValue::_L2CValue((L2CValue *)&local_420);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack240);
      if ((bVar1 & 1U) == 0) {
        bVar1 = false;
LAB_710003034c:
        lib::L2CValue::L2CValue((L2CValue *)&local_420,GROUND_TOUCH_FLAG_RIGHT);
        lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)&local_420);
        lib::L2CValue::_L2CValue((L2CValue *)&local_420);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack320);
        if ((bVar2 & 1U) == 0) {
          bVar2 = false;
LAB_71000303d4:
          lib::L2CValue::L2CValue((L2CValue *)&local_420,GROUND_TOUCH_FLAG_DOWN);
          lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)&local_420);
          lib::L2CValue::_L2CValue((L2CValue *)&local_420);
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack400);
          if ((bVar3 & 1U) == 0) {
            bVar3 = false;
LAB_710003045c:
            lib::L2CValue::L2CValue((L2CValue *)&local_420,_GROUND_TOUCH_FLAG_UP);
            lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)&local_420);
            lib::L2CValue::_L2CValue((L2CValue *)&local_420);
            bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack480);
            if ((bVar4 & 1U) == 0) {
              bVar4 = false;
LAB_71000304e4:
              lib::L2CValue::L2CValue((L2CValue *)&local_420,GROUND_TOUCH_FLAG_UP_LEFT);
              lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)&local_420);
              lib::L2CValue::_L2CValue((L2CValue *)&local_420);
              bVar5 = lib::L2CValue::operator_cast_to_bool(aLStack560);
              if ((bVar5 & 1U) == 0) {
                bVar5 = false;
LAB_710003056c:
                lib::L2CValue::L2CValue((L2CValue *)&local_420,GROUND_TOUCH_FLAG_UP_RIGHT);
                lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)&local_420);
                lib::L2CValue::_L2CValue((L2CValue *)&local_420);
                bVar6 = lib::L2CValue::operator_cast_to_bool(aLStack640);
                if ((bVar6 & 1U) == 0) {
                  bVar6 = false;
LAB_71000305f8:
                  lib::L2CValue::L2CValue((L2CValue *)&local_420,_GROUND_TOUCH_FLAG_DOWN_LEFT);
                  lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)&local_420);
                  lib::L2CValue::_L2CValue((L2CValue *)&local_420);
                  bVar7 = lib::L2CValue::operator_cast_to_bool(aLStack720);
                  if ((bVar7 & 1U) == 0) {
                    bVar7 = false;
LAB_7100030684:
                    lib::L2CValue::L2CValue((L2CValue *)&local_420,_GROUND_TOUCH_FLAG_DOWN_RIGHT);
                    lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)&local_420);
                    lib::L2CValue::_L2CValue((L2CValue *)&local_420);
                    bVar8 = lib::L2CValue::operator_cast_to_bool(aLStack800);
                    if ((bVar8 & 1U) == 0) {
                      lib::L2CValue::_L2CValue(aLStack800);
                      bVar9 = 0;
                      if (!bVar7) goto LAB_7100030728;
                      goto LAB_710003078c;
                    }
                    lib::L2CValue::L2CValue(aLStack816,_GROUND_TOUCH_FLAG_DOWN_RIGHT);
                    lib::L2CValue::L2CValue(aLStack832,(L2CValue *)&local_b0);
                    lib::L2CValue::L2CValue(aLStack848,(L2CValue *)&local_c0);
                    FUN_7100031dd0(&local_420,this,aLStack816,aLStack832,aLStack848);
                    bVar9 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_420);
                    lib::L2CValue::_L2CValue((L2CValue *)&local_420);
                    lib::L2CValue::_L2CValue(aLStack848);
                    lib::L2CValue::_L2CValue(aLStack832);
                    lib::L2CValue::_L2CValue(aLStack816);
                    lib::L2CValue::_L2CValue(aLStack800);
                    if (bVar7) goto LAB_710003078c;
LAB_7100030728:
                    lib::L2CValue::_L2CValue(aLStack720);
                  }
                  else {
                    lib::L2CValue::L2CValue(aLStack752,_GROUND_TOUCH_FLAG_DOWN_LEFT);
                    lib::L2CValue::L2CValue(aLStack768,(L2CValue *)&local_b0);
                    lib::L2CValue::L2CValue(aLStack784,(L2CValue *)&local_c0);
                    FUN_7100031dd0(aLStack736,this,aLStack752,aLStack768,aLStack784);
                    bVar8 = lib::L2CValue::operator_cast_to_bool(aLStack736);
                    bVar7 = true;
                    bVar9 = 1;
                    if ((bVar8 & 1U) == 0) goto LAB_7100030684;
LAB_710003078c:
                    lib::L2CValue::_L2CValue(aLStack736);
                    lib::L2CValue::_L2CValue(aLStack784);
                    lib::L2CValue::_L2CValue(aLStack768);
                    lib::L2CValue::_L2CValue(aLStack752);
                    lib::L2CValue::_L2CValue(aLStack720);
                  }
                  if (bVar6) goto LAB_71000307bc;
                  lib::L2CValue::_L2CValue(aLStack640);
                }
                else {
                  lib::L2CValue::L2CValue(aLStack672,GROUND_TOUCH_FLAG_UP_RIGHT);
                  lib::L2CValue::L2CValue(aLStack688,(L2CValue *)&local_b0);
                  lib::L2CValue::L2CValue(aLStack704,(L2CValue *)&local_c0);
                  FUN_7100031dd0(aLStack656,this,aLStack672,aLStack688,aLStack704);
                  bVar7 = lib::L2CValue::operator_cast_to_bool(aLStack656);
                  bVar6 = true;
                  bVar9 = 1;
                  if ((bVar7 & 1U) == 0) goto LAB_71000305f8;
LAB_71000307bc:
                  lib::L2CValue::_L2CValue(aLStack656);
                  lib::L2CValue::_L2CValue(aLStack704);
                  lib::L2CValue::_L2CValue(aLStack688);
                  lib::L2CValue::_L2CValue(aLStack672);
                  lib::L2CValue::_L2CValue(aLStack640);
                }
                if (bVar5) goto LAB_71000307ec;
                lib::L2CValue::_L2CValue(aLStack560);
              }
              else {
                lib::L2CValue::L2CValue(aLStack592,GROUND_TOUCH_FLAG_UP_LEFT);
                lib::L2CValue::L2CValue(aLStack608,(L2CValue *)&local_b0);
                lib::L2CValue::L2CValue(aLStack624,(L2CValue *)&local_c0);
                FUN_7100031dd0(aLStack576,this,aLStack592,aLStack608,aLStack624);
                bVar6 = lib::L2CValue::operator_cast_to_bool(aLStack576);
                bVar5 = true;
                bVar9 = 1;
                if ((bVar6 & 1U) == 0) goto LAB_710003056c;
LAB_71000307ec:
                lib::L2CValue::_L2CValue(aLStack576);
                lib::L2CValue::_L2CValue(aLStack624);
                lib::L2CValue::_L2CValue(aLStack608);
                lib::L2CValue::_L2CValue(aLStack592);
                lib::L2CValue::_L2CValue(aLStack560);
              }
              if (bVar4) goto LAB_7100030818;
              lib::L2CValue::_L2CValue(aLStack480);
            }
            else {
              lib::L2CValue::L2CValue(aLStack512,_GROUND_TOUCH_FLAG_UP);
              lib::L2CValue::L2CValue(aLStack528,(L2CValue *)&local_b0);
              lib::L2CValue::L2CValue(aLStack544,(L2CValue *)&local_c0);
              FUN_7100031dd0(aLStack496,this,aLStack512,aLStack528,aLStack544);
              bVar5 = lib::L2CValue::operator_cast_to_bool(aLStack496);
              bVar4 = true;
              bVar9 = 1;
              if ((bVar5 & 1U) == 0) goto LAB_71000304e4;
LAB_7100030818:
              lib::L2CValue::_L2CValue(aLStack496);
              lib::L2CValue::_L2CValue(aLStack544);
              lib::L2CValue::_L2CValue(aLStack528);
              lib::L2CValue::_L2CValue(aLStack512);
              lib::L2CValue::_L2CValue(aLStack480);
            }
            if (bVar3) goto LAB_7100030844;
            lib::L2CValue::_L2CValue(aLStack400);
          }
          else {
            lib::L2CValue::L2CValue(aLStack432,GROUND_TOUCH_FLAG_DOWN);
            lib::L2CValue::L2CValue(aLStack448,(L2CValue *)&local_b0);
            lib::L2CValue::L2CValue(aLStack464,(L2CValue *)&local_c0);
            FUN_7100031dd0(aLStack416,this,aLStack432,aLStack448,aLStack464);
            bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack416);
            bVar3 = true;
            bVar9 = 1;
            if ((bVar4 & 1U) == 0) goto LAB_710003045c;
LAB_7100030844:
            lib::L2CValue::_L2CValue(aLStack416);
            lib::L2CValue::_L2CValue(aLStack464);
            lib::L2CValue::_L2CValue(aLStack448);
            lib::L2CValue::_L2CValue(aLStack432);
            lib::L2CValue::_L2CValue(aLStack400);
          }
          if (bVar2) goto LAB_7100030870;
          lib::L2CValue::_L2CValue(aLStack320);
        }
        else {
          lib::L2CValue::L2CValue(aLStack352,GROUND_TOUCH_FLAG_RIGHT);
          lib::L2CValue::L2CValue(aLStack368,(L2CValue *)&local_b0);
          lib::L2CValue::L2CValue(aLStack384,(L2CValue *)&local_c0);
          FUN_7100031dd0(aLStack336,this,aLStack352,aLStack368,aLStack384);
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack336);
          bVar2 = true;
          bVar9 = 1;
          if ((bVar3 & 1U) == 0) goto LAB_71000303d4;
LAB_7100030870:
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue(aLStack384);
          lib::L2CValue::_L2CValue(aLStack368);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue(aLStack320);
        }
        if (bVar1) {
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue(aLStack272);
        }
        lib::L2CValue::_L2CValue(aLStack240);
        if ((bVar9 & 1) != 0) goto LAB_71000308c8;
      }
      else {
        lib::L2CValue::L2CValue(aLStack272,_GROUND_TOUCH_FLAG_LEFT);
        lib::L2CValue::L2CValue(aLStack288,(L2CValue *)&local_b0);
        lib::L2CValue::L2CValue(aLStack304,(L2CValue *)&local_c0);
        FUN_7100031dd0(aLStack256,this,aLStack272,aLStack288,aLStack304);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack256);
        if ((bVar1 & 1U) == 0) {
          bVar1 = true;
          goto LAB_710003034c;
        }
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack240);
LAB_71000308c8:
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_420,_WEAPON_ROSETTA_TICO_STATUS_SPECIAL_N_SHOOT_WORK_FLAG_HIT)
        ;
        iVar10 = lib::L2CValue::as_integer((L2CValue *)&local_420);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar23,iVar10);
        lib::L2CValue::_L2CValue((L2CValue *)&local_420);
        lib::L2CValue::L2CValue((L2CValue *)&local_420,true);
        lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_420);
        lib::L2CValue::_L2CValue((L2CValue *)&local_420);
      }
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_a0,_WEAPON_ROSETTA_TICO_STATUS_SPECIAL_N_SHOOT_WORK_FLAG_HIT);
  iVar10 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  bVar9 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar23,iVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_420,(bool)(bVar9 & 1));
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_420);
  lib::L2CValue::_L2CValue((L2CValue *)&local_420);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_420,0x25c3e81cd9);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_420);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack864);
    lib::L2CValue::_L2CValue((L2CValue *)&local_420);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_420,_WEAPON_ROSETTA_TICO_STATUS_SPECIAL_N_SHOOT_WORK_FLAG_HIT);
    iVar10 = lib::L2CValue::as_integer((L2CValue *)&local_420);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar23,iVar10);
    lib::L2CValue::_L2CValue((L2CValue *)&local_420);
  }
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack208);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack880,_WEAPON_ROSETTA_TICO_STATUS_KIND_SPECIAL_N_END);
    lib::L2CValue::L2CValue(aLStack896,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack896);
    lib::L2CValue::_L2CValue(aLStack880);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_71000314ec;
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_b0,_WEAPON_ROSETTA_TICO_STATUS_SPECIAL_N_COMMON_WORK_FLAG_REFLECT);
  iVar10 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
  bVar9 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar23,iVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,(bool)(bVar9 & 1));
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_a0);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    this_00 = &local_b0;
LAB_7100030bbc:
    lib::L2CValue::_L2CValue((L2CValue *)this_00);
  }
  else {
    HVar14 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar23);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,HVar14);
    lib::L2CValue::L2CValue((L2CValue *)&local_420,0x157cde164d);
    uVar12 = lib::L2CValue::operator__((L2CValue *)&local_c0,(L2CValue *)&local_420);
    lib::L2CValue::_L2CValue((L2CValue *)&local_420);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    if ((uVar12 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_420,0x157cde164d);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,-1.0);
      lib::L2CValue::L2CValue((L2CValue *)&local_b0,1.0);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,0.0);
      lib::L2CValue::L2CValue(aLStack240,true);
      HVar14 = lib::L2CValue::as_hash((L2CValue *)&local_420);
      fVar24 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
      fVar25 = (float)lib::L2CValue::as_number((L2CValue *)&local_b0);
      fVar26 = (float)lib::L2CValue::as_number((L2CValue *)&local_c0);
      bVar9 = lib::L2CValue::as_bool(aLStack240);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar23,HVar14,fVar24,fVar25,fVar26,(bool)(bVar9 & 1),false);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      this_00 = &local_420;
      goto LAB_7100030bbc;
    }
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_a0,_WEAPON_ROSETTA_TICO_STATUS_SPECIAL_N_SHOOT_WORK_FLAG_HIT_FIGHTER
            );
  iVar10 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  bVar9 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar23,iVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_420,(bool)(bVar9 & 1));
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_420);
  lib::L2CValue::_L2CValue((L2CValue *)&local_420);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_420,
               _WEAPON_ROSETTA_TICO_STATUS_SPECIAL_N_SHOOT_WORK_FLAG_HIT_FIGHTER);
    iVar10 = lib::L2CValue::as_integer((L2CValue *)&local_420);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar23,iVar10);
    lib::L2CValue::_L2CValue((L2CValue *)&local_420);
    lib::L2CValue::L2CValue((L2CValue *)&local_420,0xaa3c06ee2);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,0x17eeeaea50);
    uVar12 = lib::L2CValue::as_integer((L2CValue *)&local_420);
    uVar13 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
    fVar24 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar23,uVar12,uVar13);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar24);
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_420);
    uVar12 = lib::L2CValue::as_number((L2CValue *)&local_a0);
    lVar28 = lib::L2CValue::as_number((L2CValue *)&local_a0);
    uVar27 = lib::L2CValue::as_number((L2CValue *)&local_a0);
    local_420 = uVar12 & 0xffffffff | lVar28 << 0x20;
    uStack1048 = (ulong)uVar27;
    app::lua_bind::KineticModule__mul_speed_impl(*ppBVar23,(Vector3f *)&local_420,-1);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,0xaa3c06ee2);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,0x185dd9299b);
    uVar12 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
    uVar13 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    fVar24 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar23,uVar12,uVar13);
    lib::L2CValue::L2CValue((L2CValue *)&local_420,fVar24);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    fVar24 = (float)app::lua_bind::AttackModule__power_mul_status_impl(*ppBVar23);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,fVar24);
    lib::L2CValue::operator_((L2CValue *)&local_c0,(L2CValue *)&local_420);
    fVar24 = (float)lib::L2CValue::as_number((L2CValue *)&local_b0);
    app::lua_bind::AttackModule__set_power_mul_status_impl(*ppBVar23,fVar24);
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_420);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_b0,
             _WEAPON_ROSETTA_TICO_STATUS_SPECIAL_N_SHOOT_WORK_INT_RUN_SMOKE_FRAME);
  iVar10 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
  iVar10 = app::lua_bind::WorkModule__get_int_impl(*ppBVar23,iVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,iVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_420,8);
  uVar12 = lib::L2CValue::operator__((L2CValue *)&local_420,(L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_420);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
  if ((uVar12 & 1) != 0) {
    pfVar15 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar23);
    lib::L2CValue::L2CValue(aLStack944,*pfVar15);
    lib::L2CValue::L2CValue(aLStack928,pfVar15[1]);
    lib::L2CValue::L2CValue(aLStack912,pfVar15[2]);
    FUN_710002fd80(aLStack240,this,aLStack944);
    lib::L2CValue::_L2CValue(aLStack912);
    lib::L2CValue::_L2CValue(aLStack928);
    lib::L2CValue::_L2CValue(aLStack944);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,0.0);
    fVar24 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar23);
    lib::L2CValue::L2CValue(aLStack400,fVar24);
    lib::L2CValue::L2CValue((L2CValue *)&local_420,-10.0);
    lib::L2CValue::operator_((L2CValue *)&local_420,aLStack400);
    lib::L2CValue::_L2CValue((L2CValue *)&local_420);
    pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pBVar17 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar16);
    fVar24 = (float)app::SlopeModuleSimple::gravity_angle(pBVar17);
    lib::L2CValue::L2CValue(aLStack480,fVar24);
    fVar24 = (float)lib::L2CValue::as_number((L2CValue *)&local_b0);
    fVar25 = (float)lib::L2CValue::as_number((L2CValue *)&local_c0);
    fVar26 = (float)lib::L2CValue::as_number(aLStack480);
    uVar29 = app::sv_math::vec2_rot(fVar24,fVar25,fVar26);
    lib::L2CValue::L2CValue(aLStack976,(float)uVar29);
    lib::L2CValue::L2CValue(aLStack960,(float)((ulong)uVar29 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)&local_420,aLStack976);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,aLStack960);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xe0,(L2CValue)0x60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_420);
    lib::L2CValue::_L2CValue(aLStack960);
    lib::L2CValue::_L2CValue(aLStack976);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::L2CValue(aLStack992,0.0);
    lib::L2CValue::L2CValue(aLStack1008,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x20,(L2CValue)0x10);
    lib::L2CValue::_L2CValue(aLStack1008);
    lib::L2CValue::_L2CValue(aLStack992);
    lib::L2CValue::L2CValue(aLStack480,false);
    pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x18cdc1683);
    pLVar18 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x1fbdb2615);
    pLVar19 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
    pLVar20 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
    pLVar21 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x18cdc1683);
    pLVar22 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x1fbdb2615);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x18cdc1683);
    this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack560,true);
    uVar12 = lib::L2CValue::as_number(pLVar19);
    uVar27 = lib::L2CValue::as_number(pLVar20);
    local_a0 = uVar12 & 0xffffffff | (ulong)uVar27 << 0x20;
    uStack152 = 0;
    uVar12 = lib::L2CValue::as_number(pLVar21);
    uVar27 = lib::L2CValue::as_number(pLVar22);
    local_b0 = uVar12 & 0xffffffff | (ulong)uVar27 << 0x20;
    uStack168 = 0;
    uVar12 = lib::L2CValue::as_number(this_01);
    uVar27 = lib::L2CValue::as_number(this_02);
    local_c0 = uVar12 & 0xffffffff | (ulong)uVar27 << 0x20;
    uStack184 = 0;
    bVar9 = lib::L2CValue::as_bool(aLStack560);
    bVar9 = app::lua_bind::GroundModule__ray_check_hit_pos_impl
                      (*ppBVar23,(Vector2f *)&local_a0,(Vector2f *)&local_b0,(Vector2f *)&local_c0,
                       (bool)(bVar9 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_420,(bool)(bVar9 & 1));
    lib::L2CValue::L2CValue(aLStack1040,(float)local_c0);
    lib::L2CValue::L2CValue(aLStack1024,local_c0._4_4_);
    lib::L2CValue::operator_(aLStack480,(L2CValue *)&local_420);
    lib::L2CValue::operator_(pLVar16,aLStack1040);
    lib::L2CValue::operator_(pLVar18,aLStack1024);
    lib::L2CValue::_L2CValue(aLStack1024);
    lib::L2CValue::_L2CValue(aLStack1040);
    lib::L2CValue::_L2CValue((L2CValue *)&local_420);
    lib::L2CValue::_L2CValue(aLStack560);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack480);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x31ed91fca);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,0.0);
      lib::L2CValue::L2CValue(aLStack560,0.0);
      lib::L2CValue::L2CValue(aLStack640,0.0);
      HVar14 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
      uVar12 = lib::L2CValue::as_number((L2CValue *)&local_c0);
      lVar28 = lib::L2CValue::as_number(aLStack560);
      uVar27 = lib::L2CValue::as_number(aLStack640);
      local_420 = uVar12 & 0xffffffff | lVar28 << 0x20;
      uStack1048 = (ulong)uVar27;
      app::lua_bind::ModelModule__joint_global_rotation_impl
                (*ppBVar23,HVar14,(Vector3f *)&local_420,true);
      lib::L2CValue::L2CValue(aLStack1104,(float)local_420);
      lib::L2CValue::L2CValue(aLStack1088,local_420._4_4_);
      lib::L2CValue::L2CValue(aLStack1072,(float)uStack1048);
      FUN_710002fd80(&local_b0,this,aLStack1104);
      lib::L2CValue::_L2CValue(aLStack1072);
      lib::L2CValue::_L2CValue(aLStack1088);
      lib::L2CValue::_L2CValue(aLStack1104);
      lib::L2CValue::_L2CValue(aLStack640);
      lib::L2CValue::_L2CValue(aLStack560);
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,0x16909a3bbe);
      pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x18cdc1683);
      pLVar18 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x1fbdb2615);
      pLVar19 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
      pLVar20 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_b0,0x18cdc1683);
      pLVar21 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_b0,0x1fbdb2615);
      pLVar22 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_b0,0x162d277af);
      HVar14 = lib::L2CValue::as_hash((L2CValue *)&local_c0);
      uVar12 = lib::L2CValue::as_number(pLVar16);
      lVar28 = lib::L2CValue::as_number(pLVar18);
      uVar27 = lib::L2CValue::as_number(pLVar19);
      local_420 = uVar12 & 0xffffffff | lVar28 << 0x20;
      uStack1048 = (ulong)uVar27;
      uVar12 = lib::L2CValue::as_number(pLVar20);
      lVar28 = lib::L2CValue::as_number(pLVar21);
      uVar27 = lib::L2CValue::as_number(pLVar22);
      local_a0 = uVar12 & 0xffffffff | lVar28 << 0x20;
      uStack152 = (ulong)uVar27;
      uVar27 = app::lua_bind::EffectModule__req_impl
                         (*ppBVar23,HVar14,(Vector3f *)&local_420,(Vector3f *)&local_a0,1.0,0,-1,
                          false,0);
      lib::L2CValue::L2CValue(aLStack1120,uVar27);
      lib::L2CValue::_L2CValue(aLStack1120);
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_420,0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_a0,
               _WEAPON_ROSETTA_TICO_STATUS_SPECIAL_N_SHOOT_WORK_INT_RUN_SMOKE_FRAME);
    iVar10 = lib::L2CValue::as_integer((L2CValue *)&local_420);
    iVar11 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar23,iVar10,iVar11);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_420);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack240);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000314ec:
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  return;
}

