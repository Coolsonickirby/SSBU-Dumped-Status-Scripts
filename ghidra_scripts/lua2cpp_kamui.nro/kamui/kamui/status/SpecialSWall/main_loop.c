
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKamui::status::SpecialSWall_main_loop(L2CFighterKamui *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
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
  undefined auStack192 [32];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,false);
  ppBVar8 = &this->moduleAccessor;
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
LAB_710001c400:
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar8);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KAMUI_STATUS_KIND_SPECIAL_S_WALL_END);
      lib::L2CValue::L2CValue(aLStack160,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x70,(L2CValue)0x60);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710001c40c;
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack192,_GROUND_TOUCH_FLAG_ALL);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack192);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar8,uVar4);
    lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack192 + 0x10));
    if ((bVar2 & 1U) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack192,_FIGHTER_KAMUI_STATUS_SPECIAL_S_FLAG_RESET_NEWTRAL_X);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack192);
        uVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar5);
        pLVar7 = (L2CValue *)(ulong)(uVar4 & 1);
        lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),SUB41(uVar4 & 1,0));
        lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)auStack192);
        if ((bVar2 & 1U) != 0) {
          fVar9 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar8);
          lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar9);
          lib::L2CAgent::math_abs((L2CAgent *)auStack192,pLVar7);
          lib::L2CValue::L2CValue(aLStack96,0.5);
          uVar6 = lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)auStack192);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_STATUS_SPECIAL_S_FLAG_RESET_NEWTRAL_X);
            iVar5 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar5);
            lib::L2CValue::_L2CValue(aLStack96);
          }
        }
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack192,_FIGHTER_KAMUI_STATUS_SPECIAL_S_FLAG_RESET_NEWTRAL_Y);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack192);
        uVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar5);
        pLVar7 = (L2CValue *)(ulong)(uVar4 & 1);
        lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),SUB41(uVar4 & 1,0));
        lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)auStack192);
        if ((bVar2 & 1U) != 0) {
          fVar9 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar8);
          lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar9);
          lib::L2CAgent::math_abs((L2CAgent *)auStack192,pLVar7);
          lib::L2CValue::L2CValue(aLStack96,0.5);
          uVar6 = lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)auStack192);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_STATUS_SPECIAL_S_FLAG_RESET_NEWTRAL_Y);
            iVar5 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar5);
            lib::L2CValue::_L2CValue(aLStack96);
          }
        }
        lib::L2CValue::L2CValue
                  ((L2CValue *)(auStack192 + 0x10),
                   _FIGHTER_KAMUI_STATUS_SPECIAL_S_FLAG_ENABLE_KICK_BUTTON_TRIGGER);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack192 + 0x10));
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar5);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack240,_FIGHTER_KAMUI_STATUS_SPECIAL_S_FLAG_ENABLE_KICK_BUTTON_ON);
          iVar5 = lib::L2CValue::as_integer(aLStack240);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar5);
          lib::L2CValue::L2CValue((L2CValue *)auStack192,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack192);
          lib::L2CValue::_L2CValue((L2CValue *)auStack192);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
          if ((bVar2 & 1U) == 0) goto LAB_710001c400;
        }
        else {
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
        }
        lib::L2CValue::L2CValue
                  ((L2CValue *)(auStack192 + 0x10),
                   _FIGHTER_KAMUI_STATUS_SPECIAL_S_FLAG_ENABLE_KICK_BUTTON_TRIGGER);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack192 + 0x10));
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar5);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        if ((bVar2 & 1U) == 0) {
          bVar2 = false;
LAB_710001bc78:
          lib::L2CValue::L2CValue
                    (aLStack272,_FIGHTER_KAMUI_STATUS_SPECIAL_S_FLAG_ENABLE_KICK_BUTTON_ON);
          iVar5 = lib::L2CValue::as_integer(aLStack272);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar5);
          lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack256);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack272);
          if (bVar2) goto LAB_710001bcc8;
        }
        else {
          lib::L2CValue::L2CValue(aLStack240,_FIGHTER_KAMUI_STATUS_SPECIAL_S_FLAG_RESET_NEWTRAL_X);
          iVar5 = lib::L2CValue::as_integer(aLStack240);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar5);
          lib::L2CValue::L2CValue((L2CValue *)auStack192,(bool)(bVar1 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack192);
          bVar2 = true;
          bVar1 = 1;
          if ((bVar3 & 1U) == 0) goto LAB_710001bc78;
LAB_710001bcc8:
          lib::L2CValue::_L2CValue((L2CValue *)auStack192);
          lib::L2CValue::_L2CValue(aLStack240);
        }
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
        if ((bVar1 & 1) != 0) {
          fVar9 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar8);
          lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),fVar9);
          lib::L2CValue::L2CValue(aLStack96,-0.5);
          uVar6 = lib::L2CValue::operator__((L2CValue *)(auStack192 + 0x10),aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar6 & 1) == 0) {
            bVar2 = false;
LAB_710001bd7c:
            fVar9 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar8);
            lib::L2CValue::L2CValue(aLStack272,fVar9);
            lib::L2CValue::L2CValue(aLStack96,0.5);
            uVar6 = lib::L2CValue::operator__(aLStack96,aLStack272);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar6 & 1) == 0) {
              uVar6 = 0;
            }
            else {
              fVar9 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar8);
              lib::L2CValue::L2CValue(aLStack288,fVar9);
              lib::L2CValue::L2CValue(aLStack96,0);
              uVar6 = lib::L2CValue::operator_(aLStack96,aLStack288);
              uVar6 = uVar6 & 0xffffffff;
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack288);
            }
            lib::L2CValue::_L2CValue(aLStack272);
            if (bVar2) {
              lib::L2CValue::_L2CValue(aLStack256);
            }
            lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
            if ((uVar6 & 1) == 0) {
              fVar9 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar8);
              lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),fVar9);
              lib::L2CValue::L2CValue(aLStack96,0.5);
              uVar6 = lib::L2CValue::operator__(aLStack96,(L2CValue *)(auStack192 + 0x10));
              lib::L2CValue::_L2CValue(aLStack96);
              if ((uVar6 & 1) == 0) {
                bVar2 = false;
LAB_710001bef4:
                fVar9 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar8);
                lib::L2CValue::L2CValue(aLStack288,fVar9);
                lib::L2CValue::L2CValue(aLStack96,-0.5);
                uVar6 = lib::L2CValue::operator__(aLStack288,aLStack96);
                lib::L2CValue::_L2CValue(aLStack96);
                if ((uVar6 & 1) == 0) {
                  uVar6 = 0;
                }
                else {
                  fVar9 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar8);
                  lib::L2CValue::L2CValue(aLStack336,fVar9);
                  lib::L2CValue::L2CValue(aLStack96,0);
                  uVar6 = lib::L2CValue::operator_(aLStack96,aLStack336);
                  uVar6 = uVar6 & 0xffffffff;
                  lib::L2CValue::_L2CValue(aLStack96);
                  lib::L2CValue::_L2CValue(aLStack336);
                }
                lib::L2CValue::_L2CValue(aLStack288);
                if (bVar2) {
                  lib::L2CValue::_L2CValue(aLStack272);
                }
                lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
                if ((uVar6 & 1) == 0) goto LAB_710001bfdc;
              }
              else {
                fVar9 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar8);
                lib::L2CValue::L2CValue(aLStack272,fVar9);
                lib::L2CValue::L2CValue(aLStack96,0);
                uVar6 = lib::L2CValue::operator_(aLStack272,aLStack96);
                lib::L2CValue::_L2CValue(aLStack96);
                if ((uVar6 & 1) == 0) {
                  bVar2 = true;
                  goto LAB_710001bef4;
                }
                lib::L2CValue::_L2CValue(aLStack272);
                lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
              }
              lib::L2CValue::L2CValue(aLStack352,_FIGHTER_KAMUI_STATUS_KIND_SPECIAL_S_WALL_ATTACK_B)
              ;
              lib::L2CValue::L2CValue(aLStack368,false);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
              lib::L2CValue::_L2CValue(aLStack368);
              lib::L2CValue::_L2CValue(aLStack352);
              lib::L2CValue::L2CValue((L2CValue *)return_value,1);
              goto LAB_710001c40c;
            }
          }
          else {
            fVar9 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar8);
            lib::L2CValue::L2CValue(aLStack256,fVar9);
            lib::L2CValue::L2CValue(aLStack96,0);
            uVar6 = lib::L2CValue::operator_(aLStack256,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar6 & 1) == 0) {
              bVar2 = true;
              goto LAB_710001bd7c;
            }
            lib::L2CValue::_L2CValue(aLStack256);
            lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
          }
          lib::L2CValue::L2CValue(aLStack304,_FIGHTER_KAMUI_STATUS_KIND_SPECIAL_S_WALL_ATTACK_F);
          lib::L2CValue::L2CValue(aLStack320,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_710001c40c;
        }
LAB_710001bfdc:
        lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),CONTROL_PAD_BUTTON_SPECIAL);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack192 + 0x10));
        bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar8,iVar5);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack336,_CONTROL_PAD_BUTTON_ATTACK);
          iVar5 = lib::L2CValue::as_integer(aLStack336);
          bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar8,iVar5);
          lib::L2CValue::L2CValue(aLStack288,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack288);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack96,false);
            lib::L2CValue::operator_(aLStack128,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),false);
            lib::L2CValue::L2CValue(aLStack288,_CONTROL_PAD_BUTTON_JUMP);
            iVar5 = lib::L2CValue::as_integer(aLStack288);
            bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar8,iVar5);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack288);
            if ((bVar2 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack96,true);
              lib::L2CValue::operator_(aLStack128,aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
            }
            lib::L2CValue::L2CValue
                      (aLStack288,_FIGHTER_KAMUI_STATUS_SPECIAL_S_FLAG_ENABLE_KICK_BUTTON_TRIGGER);
            iVar5 = lib::L2CValue::as_integer(aLStack288);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar5);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
            if ((bVar2 & 1U) == 0) {
              bVar2 = false;
LAB_710001c1f0:
              lib::L2CValue::L2CValue
                        (aLStack448,_FIGHTER_KAMUI_STATUS_SPECIAL_S_FLAG_ENABLE_KICK_BUTTON_ON);
              iVar5 = lib::L2CValue::as_integer(aLStack448);
              bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar5);
              lib::L2CValue::L2CValue(aLStack432,(bool)(bVar1 & 1));
              bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack432);
              lib::L2CValue::_L2CValue(aLStack432);
              lib::L2CValue::_L2CValue(aLStack448);
              if (bVar2) goto LAB_710001c240;
            }
            else {
              lib::L2CValue::L2CValue
                        (aLStack416,_FIGHTER_KAMUI_STATUS_SPECIAL_S_FLAG_RESET_NEWTRAL_Y);
              iVar5 = lib::L2CValue::as_integer(aLStack416);
              bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar5);
              lib::L2CValue::L2CValue(aLStack336,(bool)(bVar1 & 1));
              bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack336);
              bVar2 = true;
              bVar1 = 1;
              if ((bVar3 & 1U) == 0) goto LAB_710001c1f0;
LAB_710001c240:
              lib::L2CValue::_L2CValue(aLStack336);
              lib::L2CValue::_L2CValue(aLStack416);
            }
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack288);
            if ((bVar1 & 1) != 0) {
              fVar9 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar8);
              lib::L2CValue::L2CValue(aLStack288,fVar9);
              lib::L2CValue::L2CValue(aLStack96,0.5);
              uVar6 = lib::L2CValue::operator__(aLStack96,aLStack288);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack288);
              if ((uVar6 & 1) != 0) {
                lib::L2CValue::L2CValue(aLStack96,true);
                lib::L2CValue::operator_(aLStack128,aLStack96);
                lib::L2CValue::_L2CValue(aLStack96);
              }
              lua2cpp::L2CFighterCommon::sub_check_command_squat(this);
              bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              if ((bVar2 & 1U) != 0) {
                lib::L2CValue::L2CValue(aLStack96,true);
                lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),aLStack96);
                lib::L2CValue::_L2CValue(aLStack96);
              }
            }
            lib::L2CValue::L2CValue(aLStack96,true);
            uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack96,true);
              uVar6 = lib::L2CValue::operator__((L2CValue *)(auStack192 + 0x10),aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              if ((uVar6 & 1) == 0) {
                lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
                goto LAB_710001c400;
              }
              lib::L2CValue::L2CValue(aLStack496,_FIGHTER_KAMUI_STATUS_KIND_SPECIAL_S_WALL_END);
              lib::L2CValue::L2CValue(aLStack512,false);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
              lib::L2CValue::_L2CValue(aLStack512);
              lib::L2CValue::_L2CValue(aLStack496);
              lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            }
            else {
              lib::L2CValue::L2CValue(aLStack464,_FIGHTER_KAMUI_STATUS_KIND_SPECIAL_S_WALL_JUMP);
              lib::L2CValue::L2CValue(aLStack480,false);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
              lib::L2CValue::_L2CValue(aLStack480);
              lib::L2CValue::_L2CValue(aLStack464);
              lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            }
            lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
            goto LAB_710001c40c;
          }
        }
        else {
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
        }
        lib::L2CValue::L2CValue(aLStack384,_FIGHTER_KAMUI_STATUS_KIND_SPECIAL_S_WALL_ATTACK_F);
        lib::L2CValue::L2CValue(aLStack400,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710001c40c;
      }
    }
    else {
      lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    }
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KAMUI_STATUS_KIND_SPECIAL_S_WALL_END);
    lib::L2CValue::L2CValue(aLStack224,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
LAB_710001c40c:
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

