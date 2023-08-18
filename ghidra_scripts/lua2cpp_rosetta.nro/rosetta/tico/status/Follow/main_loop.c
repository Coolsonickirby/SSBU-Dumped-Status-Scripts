
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRosettaTico::status::Follow_main_loop(L2CWeaponRosettaTico *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  Hash40 HVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  BattleObjectModuleAccessor *pBVar7;
  long lVar8;
  ulong uVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
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
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  FUN_710002cca0(aLStack112,this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_71000378f4;
  }
  FUN_710002d810(aLStack112,this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_71000378f4;
  }
  ppBVar10 = &this->moduleAccessor;
  HVar4 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack176,HVar4);
  lib::L2CValue::L2CValue(aLStack112,0x11ab8b9229);
  uVar5 = lib::L2CValue::operator__(aLStack176,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
LAB_7100035e90:
    this_00 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
    bVar2 = app::WeaponSpecializer_RosettaTico::is_turn_delay(pBVar7);
    lib::L2CValue::L2CValue(aLStack192,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack208,0);
    lib::L2CValue::L2CValue
              (aLStack112,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_FOLLOW_SYNC_MOTION_PARENT);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack224,(bool)(bVar2 & 1));
    lib::L2CValue::_L2CValue(aLStack112);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack224);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0x47f9000cf);
      lib::L2CValue::operator_(aLStack208,aLStack112);
      pLVar6 = aLStack112;
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_RETURN);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,0xed66b4526);
        HVar4 = lib::L2CValue::as_hash(aLStack112);
        iVar3 = app::lua_bind::SoundModule__play_se_impl(*ppBVar10,HVar4,true,false,false,false,0);
        lib::L2CValue::L2CValue(aLStack240,iVar3);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack112);
        FUN_7100035b00(this);
        lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_RETURN);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue
                (aLStack112,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_INT_PARENT_STATUS_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack128,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_WALK);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_ITEM_SHOOT_WALK_F);
        uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) goto LAB_71000360e8;
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_ITEM_SHOOT_WALK_B);
        uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) goto LAB_71000360e8;
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_SQUAT_F);
        uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) goto LAB_71000360e8;
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_SQUAT_B);
        uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) goto LAB_71000360e8;
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_DASH);
        uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_RUN);
          uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_WALK_BRAKE);
            uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_RUN_BRAKE);
              uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((uVar5 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
                uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
                lib::L2CValue::_L2CValue(aLStack112);
                if ((uVar5 & 1) == 0) {
                  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_JUMP);
                  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
                  lib::L2CValue::_L2CValue(aLStack112);
                  if ((uVar5 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_JUMP_AERIAL);
                    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
                    lib::L2CValue::_L2CValue(aLStack112);
                    if ((uVar5 & 1) == 0) {
                      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_LANDING);
                      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
                      lib::L2CValue::_L2CValue(aLStack112);
                      if ((uVar5 & 1) == 0) {
                        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_LANDING_LIGHT);
                        uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
                        lib::L2CValue::_L2CValue(aLStack112);
                        if ((uVar5 & 1) == 0) {
                          lib::L2CValue::L2CValue
                                    (aLStack112,_FIGHTER_STATUS_KIND_LANDING_ATTACK_AIR);
                          uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
                          lib::L2CValue::_L2CValue(aLStack112);
                          if ((uVar5 & 1) == 0) {
                            lib::L2CValue::L2CValue
                                      (aLStack112,FIGHTER_STATUS_KIND_ITEM_SHOOT_LANDING);
                            uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
                            lib::L2CValue::_L2CValue(aLStack112);
                            if ((uVar5 & 1) == 0) {
                              lib::L2CValue::L2CValue
                                        (aLStack112,_FIGHTER_STATUS_KIND_HAMMER_LANDING);
                              uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
                              lib::L2CValue::_L2CValue(aLStack112);
                              if ((uVar5 & 1) == 0) {
                                lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_CATCH);
                                uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
                                lib::L2CValue::_L2CValue(aLStack112);
                                if ((uVar5 & 1) == 0) {
                                  lib::L2CValue::L2CValue
                                            (aLStack112,_FIGHTER_STATUS_KIND_CATCH_DASH);
                                  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
                                  lib::L2CValue::_L2CValue(aLStack112);
                                  if ((uVar5 & 1) == 0) {
                                    lib::L2CValue::L2CValue
                                              (aLStack112,FIGHTER_STATUS_KIND_CATCH_TURN);
                                    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
                                    lib::L2CValue::_L2CValue(aLStack112);
                                    if ((uVar5 & 1) == 0) {
                                      lib::L2CValue::L2CValue
                                                (aLStack112,FIGHTER_STATUS_KIND_FALL_SPECIAL);
                                      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
                                      lib::L2CValue::_L2CValue(aLStack112);
                                      if ((uVar5 & 1) == 0) {
                                        lib::L2CValue::L2CValue
                                                  (aLStack112,
                                                   _FIGHTER_ROSETTA_STATUS_KIND_SPECIAL_HI_END);
                                        uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
                                        lib::L2CValue::_L2CValue(aLStack112);
                                        if ((uVar5 & 1) == 0) {
                                          lib::L2CValue::L2CValue
                                                    (aLStack112,
                                                     _FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
                                          uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
                                          lib::L2CValue::_L2CValue(aLStack112);
                                          if ((uVar5 & 1) == 0) {
                                            lib::L2CValue::L2CValue(aLStack256,0x47f9000cf);
                                          }
                                          else {
                                            lib::L2CValue::L2CValue(aLStack256,0x1447a7e8cc);
                                          }
                                          goto LAB_71000360fc;
                                        }
                                      }
                                      lib::L2CValue::L2CValue(aLStack256,0xc016dd1c6);
                                      goto LAB_71000360fc;
                                    }
                                  }
                                }
                                lib::L2CValue::L2CValue(aLStack256,0xcd08f91de);
                                goto LAB_71000360fc;
                              }
                            }
                          }
                        }
                        lib::L2CValue::L2CValue(aLStack256,0x141c0788f1);
                      }
                      else {
                        lib::L2CValue::L2CValue(aLStack256,0x140d2cae59);
                      }
                      goto LAB_71000360fc;
                    }
                  }
                  lib::L2CValue::L2CValue(aLStack256,0xb9974f54b);
                }
                else {
                  lib::L2CValue::L2CValue(aLStack256,0x11ab8b9229);
                }
              }
              else {
                lib::L2CValue::L2CValue(aLStack256,0x10abc80e8e);
              }
            }
            else {
              lib::L2CValue::L2CValue(aLStack256,0x11e5c191ae);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack256,0xaf9f22227);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack256,0xba5a92e5d);
        }
      }
      else {
LAB_71000360e8:
        lib::L2CValue::L2CValue(aLStack256,0xbb3568908);
      }
LAB_71000360fc:
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::operator_(aLStack208,aLStack256);
      pLVar6 = aLStack256;
    }
    lib::L2CValue::_L2CValue(pLVar6);
    uVar5 = lib::L2CValue::operator__(aLStack176,aLStack208);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0x140d2cae59);
      uVar5 = lib::L2CValue::operator__(aLStack208,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0x141c0788f1);
        uVar5 = lib::L2CValue::operator__(aLStack208,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0x1447a7e8cc);
          uVar5 = lib::L2CValue::operator__(aLStack208,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) == 0) goto LAB_7100036270;
        }
      }
      lib::L2CValue::L2CValue
                (aLStack256,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_CHANGE_MOTION_PARENT);
      iVar3 = lib::L2CValue::as_integer(aLStack256);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack256);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,0x47f9000cf);
        lib::L2CValue::operator_(aLStack208,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
      }
    }
LAB_7100036270:
    lib::L2CValue::L2CValue(aLStack112,0x11ab8b9229);
    uVar5 = lib::L2CValue::operator__(aLStack208,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0x140d2cae59);
      uVar5 = lib::L2CValue::operator__(aLStack208,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_7100036a54;
      lib::L2CValue::L2CValue(aLStack112,0x141c0788f1);
      uVar5 = lib::L2CValue::operator__(aLStack208,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_7100036a54;
      lib::L2CValue::L2CValue(aLStack112,0x1447a7e8cc);
      uVar5 = lib::L2CValue::operator__(aLStack208,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_7100036a54;
      lib::L2CValue::operator_(aLStack192);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar1 & 1U) == 0) goto LAB_7100036a54;
      fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack128,fVar11);
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_PARENT_LR);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack256,fVar11);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::operator_(aLStack128,aLStack256);
      lib::L2CValue::L2CValue(aLStack112,true);
      uVar5 = lib::L2CValue::operator__(aLStack224,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
LAB_71000366e8:
        lib::L2CValue::L2CValue(aLStack288,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_TARGET_X);
        iVar3 = lib::L2CValue::as_integer(aLStack288);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack112,fVar11);
        lib::L2CValue::operator_(aLStack144,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        uVar5 = lib::L2CValue::operator_(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
LAB_7100036780:
          lib::L2CValue::L2CValue(aLStack112,0.0);
          uVar5 = lib::L2CValue::operator_(aLStack112,aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,0.0);
            uVar5 = lib::L2CValue::operator_(aLStack144,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar5 & 1) != 0) goto LAB_71000367d0;
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0.0);
          uVar5 = lib::L2CValue::operator_(aLStack112,aLStack144);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) == 0) goto LAB_7100036780;
LAB_71000367d0:
          lib::L2CValue::L2CValue
                    (aLStack112,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_PARENT_SPEED_X);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack288,fVar11);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::operator_(aLStack256,aLStack288);
          lib::L2CValue::L2CValue(aLStack112,0.0);
          uVar5 = lib::L2CValue::operator_(aLStack112,aLStack304);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) == 0) {
LAB_710003689c:
            lib::L2CValue::_L2CValue(aLStack304);
LAB_71000368a4:
            lib::L2CValue::L2CValue(aLStack304,0xaa3c06ee2);
            lib::L2CValue::L2CValue(aLStack384,0x19879f4ab6);
            uVar5 = lib::L2CValue::as_integer(aLStack304);
            uVar9 = lib::L2CValue::as_integer(aLStack384);
            fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar9);
            lib::L2CValue::L2CValue(aLStack112,fVar11);
            lib::L2CValue::operator_(aLStack160,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack384);
            pLVar6 = aLStack304;
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0.0);
            uVar5 = lib::L2CValue::operator_(aLStack272,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar5 & 1) == 0) goto LAB_710003689c;
            lib::L2CValue::L2CValue(aLStack112,-0.2);
            uVar5 = lib::L2CValue::operator_(aLStack288,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack112,0.2);
              uVar5 = lib::L2CValue::operator_(aLStack112,aLStack288);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack304);
              if ((uVar5 & 1) != 0) goto LAB_7100037a9c;
              goto LAB_71000368a4;
            }
            lib::L2CValue::_L2CValue(aLStack304);
LAB_7100037a9c:
            lib::L2CValue::L2CValue(aLStack112,1.0);
            lib::L2CValue::operator_(aLStack160,aLStack112);
            pLVar6 = aLStack112;
          }
          lib::L2CValue::_L2CValue(pLVar6);
          lib::L2CValue::L2CValue
                    (aLStack304,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_TARGET_LENGTH);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack112,fVar11);
          uVar5 = lib::L2CValue::operator_(aLStack160,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack304);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,0x1045bf6255);
            lib::L2CValue::L2CValue
                      (aLStack304,_WEAPON_ROSETTA_TICO_STATUS_FOLLOW_TURN_WORK_INT_MOTION);
            lVar8 = lib::L2CValue::as_integer(aLStack112);
            iVar3 = lib::L2CValue::as_integer(aLStack304);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar8,iVar3);
            lib::L2CValue::_L2CValue(aLStack304);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack400,_WEAPON_ROSETTA_TICO_STATUS_KIND_FOLLOW_TURN);
            lib::L2CValue::L2CValue(aLStack416,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x70,(L2CValue)0x60);
            lib::L2CValue::_L2CValue(aLStack416);
            lib::L2CValue::_L2CValue(aLStack400);
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            goto LAB_7100036a0c;
          }
          lib::L2CValue::_L2CValue(aLStack288);
        }
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack128);
        goto LAB_7100036a54;
      }
      lib::L2CValue::L2CValue(aLStack112,0.0);
      uVar5 = lib::L2CValue::operator_(aLStack272,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) goto LAB_71000366e8;
      lib::L2CValue::L2CValue
                (aLStack112,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_INT_PARENT_MOTION_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      lVar8 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack288,lVar8);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x420201547);
      uVar5 = lib::L2CValue::operator__(aLStack288,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0x8afd9b84f);
        uVar5 = lib::L2CValue::operator__(aLStack288,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::_L2CValue(aLStack288);
          goto LAB_71000366e8;
        }
        lib::L2CValue::L2CValue(aLStack112,0xf64e6fe9b);
        lib::L2CValue::L2CValue(aLStack304,_WEAPON_ROSETTA_TICO_STATUS_FOLLOW_TURN_WORK_INT_MOTION);
        lVar8 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar8,iVar3);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack352,_WEAPON_ROSETTA_TICO_STATUS_KIND_FOLLOW_TURN);
        lib::L2CValue::L2CValue(aLStack368,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0xb1ee7e61a);
        lib::L2CValue::L2CValue(aLStack304,_WEAPON_ROSETTA_TICO_STATUS_FOLLOW_TURN_WORK_INT_MOTION);
        lVar8 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar8,iVar3);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack320,_WEAPON_ROSETTA_TICO_STATUS_KIND_FOLLOW_TURN);
        lib::L2CValue::L2CValue(aLStack336,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      }
LAB_7100036a0c:
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack128);
      bVar1 = true;
    }
    else {
LAB_7100036a54:
      lib::L2CValue::L2CValue(aLStack128,false);
      lib::L2CValue::L2CValue(aLStack112,0x47f9000cf);
      uVar5 = lib::L2CValue::operator__(aLStack208,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
LAB_7100036c58:
        lib::L2CValue::L2CValue(aLStack112,true);
        lib::L2CValue::operator_(aLStack128,aLStack112);
        pLVar6 = aLStack112;
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack272,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_PARENT_SPEED_X);
        iVar3 = lib::L2CValue::as_integer(aLStack272);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack256,fVar11);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        uVar5 = lib::L2CValue::operator__(aLStack256,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack272);
          goto LAB_7100036c58;
        }
        lib::L2CValue::L2CValue
                  (aLStack304,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_PARENT_SPEED_Y);
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack288,fVar11);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        uVar5 = lib::L2CValue::operator__(aLStack288,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack272);
        if ((uVar5 & 1) == 0) goto LAB_7100036c58;
        lib::L2CValue::L2CValue(aLStack256,5.0);
        lib::L2CValue::L2CValue(aLStack272,_WEAPON_ROSETTA_TICO_STATUS_FOLLOW_WORK_FLAG_MOVE);
        iVar3 = lib::L2CValue::as_integer(aLStack272);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack272);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack112,1.5);
          lib::L2CValue::operator_(aLStack256,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
        }
        lib::L2CValue::L2CValue
                  (aLStack112,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_TARGET_LENGTH);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack272,fVar11);
        lib::L2CValue::_L2CValue(aLStack112);
        uVar5 = lib::L2CValue::operator_(aLStack256,aLStack272);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,true);
          lib::L2CValue::operator_(aLStack128,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
        }
        lib::L2CValue::_L2CValue(aLStack272);
        pLVar6 = aLStack256;
      }
      lib::L2CValue::_L2CValue(pLVar6);
      lib::L2CValue::L2CValue(aLStack112,true);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::operator_(aLStack192);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::_L2CValue(aLStack112);
LAB_7100036ec4:
          lib::L2CValue::L2CValue
                    (aLStack272,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_INT_PARENT_STATUS_KIND);
          iVar3 = lib::L2CValue::as_integer(aLStack272);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack256,iVar3);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_GUARD);
          uVar5 = lib::L2CValue::operator__(aLStack256,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack272);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack256,_WEAPON_ROSETTA_TICO_STATUS_FOLLOW_WORK_FLAG_MOVE);
            iVar3 = lib::L2CValue::as_integer(aLStack256);
            bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
            if ((bVar1 & 1U) != 0) {
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack256);
LAB_7100037248:
              lib::L2CValue::L2CValue(aLStack112,0xb1ee7e61a);
              uVar5 = lib::L2CValue::operator__(aLStack176,aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((uVar5 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack112,0xf64e6fe9b);
                uVar5 = lib::L2CValue::operator__(aLStack176,aLStack112);
                lib::L2CValue::_L2CValue(aLStack112);
                if ((uVar5 & 1) != 0) goto LAB_71000372d8;
                lib::L2CValue::L2CValue(aLStack112,0x1045bf6255);
                uVar5 = lib::L2CValue::operator__(aLStack176,aLStack112);
                lib::L2CValue::_L2CValue(aLStack112);
                if ((uVar5 & 1) != 0) goto LAB_71000372d8;
                pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
                pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
                bVar2 = app::WeaponSpecializer_RosettaTico::is_weak(pBVar7);
                lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
                bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
                lib::L2CValue::_L2CValue(aLStack112);
                if ((bVar1 & 1U) == 0) {
                  lib::L2CValue::L2CValue(aLStack112,0xd513d45fb);
                  lib::L2CValue::operator_(aLStack176,aLStack112);
                }
                else {
                  lib::L2CValue::L2CValue(aLStack112,0xb01f15f99);
                  lib::L2CValue::operator_(aLStack176,aLStack112);
                }
              }
              else {
LAB_71000372d8:
                lib::L2CValue::L2CValue(aLStack112,0x10da45e7bc);
                lib::L2CValue::operator_(aLStack176,aLStack112);
              }
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack112,0.0);
              lib::L2CValue::L2CValue(aLStack256,1.0);
              lib::L2CValue::L2CValue(aLStack272,false);
              HVar4 = lib::L2CValue::as_hash(aLStack176);
              fVar11 = (float)lib::L2CValue::as_number(aLStack112);
              fVar12 = (float)lib::L2CValue::as_number(aLStack256);
              bVar2 = lib::L2CValue::as_bool(aLStack272);
              app::lua_bind::MotionModule__change_motion_impl
                        (*ppBVar10,HVar4,fVar11,fVar12,(bool)(bVar2 & 1),0.0,false,false);
              lib::L2CValue::_L2CValue(aLStack272);
              lib::L2CValue::_L2CValue(aLStack256);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_TICO_STATUS_FOLLOW_WORK_FLAG_MOVE);
              iVar3 = lib::L2CValue::as_integer(aLStack112);
              app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
LAB_71000373b4:
              pLVar6 = aLStack112;
              goto LAB_7100037748;
            }
            bVar2 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
            lib::L2CValue::L2CValue(aLStack272,(bool)(bVar2 & 1));
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack272);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack256);
            if ((bVar1 & 1U) != 0) goto LAB_7100037248;
            bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((bVar1 & 1U) != 0) {
              pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
              pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
              bVar2 = app::WeaponSpecializer_RosettaTico::is_weak(pBVar7);
              lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
              bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((bVar1 & 1U) == 0) {
                lib::L2CValue::L2CValue(aLStack112,0xd513d45fb);
                lib::L2CValue::operator_(aLStack176,aLStack112);
              }
              else {
                lib::L2CValue::L2CValue(aLStack112,0xb01f15f99);
                lib::L2CValue::operator_(aLStack176,aLStack112);
              }
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack112,0.0);
              lib::L2CValue::L2CValue(aLStack256,1.0);
              lib::L2CValue::L2CValue(aLStack272,false);
              HVar4 = lib::L2CValue::as_hash(aLStack176);
              fVar11 = (float)lib::L2CValue::as_number(aLStack112);
              fVar12 = (float)lib::L2CValue::as_number(aLStack256);
              bVar2 = lib::L2CValue::as_bool(aLStack272);
              app::lua_bind::MotionModule__change_motion_impl
                        (*ppBVar10,HVar4,fVar11,fVar12,(bool)(bVar2 & 1),0.0,false,false);
              lib::L2CValue::_L2CValue(aLStack272);
              lib::L2CValue::_L2CValue(aLStack256);
              goto LAB_71000373b4;
            }
            goto LAB_710003774c;
          }
          lib::L2CValue::L2CValue(aLStack464,_WEAPON_ROSETTA_TICO_STATUS_KIND_FOLLOW_GUARD);
          lib::L2CValue::L2CValue(aLStack480,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
          lib::L2CValue::_L2CValue(aLStack480);
          lib::L2CValue::_L2CValue(aLStack464);
          bVar1 = true;
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        }
        else {
          fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
          lib::L2CValue::L2CValue(aLStack256,fVar11);
          lib::L2CValue::L2CValue(aLStack288,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_PARENT_LR);
          iVar3 = lib::L2CValue::as_integer(aLStack288);
          fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack272,fVar11);
          uVar5 = lib::L2CValue::operator__(aLStack256,aLStack272);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) != 0) goto LAB_7100036ec4;
          lib::L2CValue::L2CValue(aLStack112,0x1045bf6255);
          lib::L2CValue::L2CValue
                    (aLStack256,_WEAPON_ROSETTA_TICO_STATUS_FOLLOW_TURN_WORK_INT_MOTION);
          lVar8 = lib::L2CValue::as_integer(aLStack112);
          iVar3 = lib::L2CValue::as_integer(aLStack256);
          app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar8,iVar3);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack432,_WEAPON_ROSETTA_TICO_STATUS_KIND_FOLLOW_TURN);
          lib::L2CValue::L2CValue(aLStack448,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
          lib::L2CValue::_L2CValue(aLStack448);
          lib::L2CValue::_L2CValue(aLStack432);
          bVar1 = true;
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack256,false);
        lib::L2CValue::L2CValue(aLStack112,0x47f9000cf);
        uVar5 = lib::L2CValue::operator__(aLStack208,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0xb9974f54b);
          uVar5 = lib::L2CValue::operator__(aLStack208,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) != 0) goto LAB_7100036d0c;
          uVar5 = lib::L2CValue::operator__(aLStack176,aLStack208);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack288,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_CHANGE_MOTION_PARENT);
            iVar3 = lib::L2CValue::as_integer(aLStack288);
            bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
            lib::L2CValue::L2CValue(aLStack272,(bool)(bVar2 & 1));
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack272);
            if ((bVar1 & 1U) == 0) {
              lib::L2CValue::_L2CValue(aLStack272);
              pLVar6 = aLStack288;
            }
            else {
              bVar2 = app::lua_bind::MotionModule__is_loop_flag_impl(*ppBVar10);
              lib::L2CValue::L2CValue(aLStack304,(bool)(bVar2 & 1));
              lib::L2CValue::L2CValue(aLStack112,false);
              uVar5 = lib::L2CValue::operator__(aLStack304,aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack304);
              lib::L2CValue::_L2CValue(aLStack272);
              lib::L2CValue::_L2CValue(aLStack288);
              if ((uVar5 & 1) == 0) goto LAB_7100037564;
              lib::L2CValue::L2CValue(aLStack112,true);
              lib::L2CValue::operator_(aLStack256,aLStack112);
              pLVar6 = aLStack112;
            }
            goto LAB_7100037560;
          }
        }
        else {
LAB_7100036d0c:
          lib::L2CValue::L2CValue(aLStack112,0xb9974f54b);
          uVar5 = lib::L2CValue::operator__(aLStack176,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0xbc5972c51);
            uVar5 = lib::L2CValue::operator__(aLStack176,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar5 & 1) != 0) goto LAB_7100036d6c;
            lib::L2CValue::L2CValue(aLStack112,0.5);
            lib::L2CValue::operator_(aLStack160,aLStack112);
          }
          else {
LAB_7100036d6c:
            lib::L2CValue::L2CValue(aLStack112,0.1);
            lib::L2CValue::operator_(aLStack160,aLStack112);
          }
          lib::L2CValue::_L2CValue(aLStack112);
          fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar10,-1);
          lib::L2CValue::L2CValue(aLStack272,fVar11);
          lib::L2CValue::operator_(aLStack160);
          uVar5 = lib::L2CValue::operator_(aLStack272,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) == 0) {
            uVar5 = lib::L2CValue::operator_(aLStack160,aLStack272);
            if ((uVar5 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack112,0xb9974f54b);
              uVar5 = lib::L2CValue::operator__(aLStack208,aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((uVar5 & 1) == 0) goto LAB_7100037150;
LAB_7100037204:
              pLVar6 = aLStack272;
              goto LAB_7100037560;
            }
LAB_7100037150:
            lib::L2CValue::L2CValue(aLStack288,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_TARGET_X)
            ;
            iVar3 = lib::L2CValue::as_integer(aLStack288);
            fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
            lib::L2CValue::L2CValue(aLStack112,fVar11);
            lib::L2CValue::operator_(aLStack144,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack288);
            lib::L2CValue::L2CValue(aLStack112,0.5);
            uVar5 = lib::L2CValue::operator__(aLStack160,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::operator_(aLStack160);
              uVar5 = lib::L2CValue::operator_(aLStack112,aLStack144);
              if ((uVar5 & 1) == 0) {
                lib::L2CValue::_L2CValue(aLStack112);
              }
              else {
                uVar5 = lib::L2CValue::operator_(aLStack144,aLStack160);
                lib::L2CValue::_L2CValue(aLStack112);
                if ((uVar5 & 1) != 0) {
                  lib::L2CValue::operator_(aLStack208,aLStack176);
                  goto LAB_7100037204;
                }
              }
            }
            lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_TICO_KINETIC_ENERGY_ID_NORMAL);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
            fVar11 = (float)app::sv_kinetic_energy::get_speed_length(this->luaStateAgent);
            lib::L2CValue::L2CValue(aLStack288,fVar11);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack304,0xaa3c06ee2);
            lib::L2CValue::L2CValue(aLStack384,0x14ebc8553a);
            uVar5 = lib::L2CValue::as_integer(aLStack304);
            uVar9 = lib::L2CValue::as_integer(aLStack384);
            fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar9);
            lib::L2CValue::L2CValue(aLStack112,fVar11);
            uVar5 = lib::L2CValue::operator__(aLStack288,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack384);
            lib::L2CValue::_L2CValue(aLStack304);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack112,0xaf9f22227);
              lib::L2CValue::operator_(aLStack208,aLStack112);
            }
            else {
              lib::L2CValue::L2CValue(aLStack112,0xbb3568908);
              lib::L2CValue::operator_(aLStack208,aLStack112);
            }
            lib::L2CValue::_L2CValue(aLStack112);
            pLVar6 = aLStack288;
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0xbc5972c51);
            lib::L2CValue::operator_(aLStack208,aLStack112);
            pLVar6 = aLStack112;
          }
          lib::L2CValue::_L2CValue(pLVar6);
          pLVar6 = aLStack272;
LAB_7100037560:
          lib::L2CValue::_L2CValue(pLVar6);
        }
LAB_7100037564:
        uVar5 = lib::L2CValue::operator__(aLStack176,aLStack208);
        if ((uVar5 & 1) == 0) {
LAB_710003759c:
          lib::L2CValue::L2CValue(aLStack112,0xbb3568908);
          uVar5 = lib::L2CValue::operator__(aLStack176,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) == 0) {
LAB_71000375fc:
            lib::L2CValue::L2CValue(aLStack112,0xaf9f22227);
            uVar5 = lib::L2CValue::operator__(aLStack176,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar5 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack112,0xbb3568908);
              uVar5 = lib::L2CValue::operator__(aLStack208,aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((uVar5 & 1) != 0) goto LAB_710003765c;
            }
            lib::L2CValue::L2CValue(aLStack112,0.0);
            lib::L2CValue::L2CValue(aLStack272,1.0);
            lib::L2CValue::L2CValue(aLStack288,false);
            HVar4 = lib::L2CValue::as_hash(aLStack208);
            fVar11 = (float)lib::L2CValue::as_number(aLStack112);
            fVar12 = (float)lib::L2CValue::as_number(aLStack272);
            bVar2 = lib::L2CValue::as_bool(aLStack288);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar10,HVar4,fVar11,fVar12,(bool)(bVar2 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack288);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::_L2CValue(aLStack112);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0xaf9f22227);
            uVar5 = lib::L2CValue::operator__(aLStack208,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar5 & 1) == 0) goto LAB_71000375fc;
LAB_710003765c:
            HVar4 = lib::L2CValue::as_hash(aLStack208);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar10,HVar4,-1.0,1.0,0.0,false,false);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,true);
          uVar5 = lib::L2CValue::operator__(aLStack256,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) != 0) goto LAB_710003759c;
        }
        lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_TICO_STATUS_FOLLOW_WORK_FLAG_MOVE);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::_L2CValue(aLStack112);
        pLVar6 = aLStack256;
LAB_7100037748:
        lib::L2CValue::_L2CValue(pLVar6);
LAB_710003774c:
        bVar1 = false;
      }
      lib::L2CValue::_L2CValue(aLStack128);
    }
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    if (!bVar1) goto LAB_7100037774;
  }
  else {
    bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar1 & 1U) != 0) goto LAB_7100035e90;
LAB_7100037774:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
      bVar2 = app::WeaponSpecializer_RosettaTico::is_weak(pBVar7);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      if ((bVar1 & 1U) == 0) {
        lVar8 = -0x70;
      }
      else {
        HVar4 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
        lib::L2CValue::L2CValue(aLStack192,HVar4);
        lib::L2CValue::L2CValue(aLStack112,0xd513d45fb);
        uVar5 = lib::L2CValue::operator__(aLStack192,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar5 & 1) == 0) goto LAB_71000378e0;
        lib::L2CValue::L2CValue(aLStack112,0xb01f15f99);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack192,1.0);
        lib::L2CValue::L2CValue(aLStack208,false);
        HVar4 = lib::L2CValue::as_hash(aLStack112);
        fVar11 = (float)lib::L2CValue::as_number(aLStack128);
        fVar12 = (float)lib::L2CValue::as_number(aLStack192);
        bVar2 = lib::L2CValue::as_bool(aLStack208);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar10,HVar4,fVar11,fVar12,(bool)(bVar2 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack128);
        lVar8 = -0x60;
      }
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar8));
    }
LAB_71000378e0:
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack176);
LAB_71000378f4:
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

