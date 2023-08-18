
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::AttackAir_pre(L2CFighterPickel *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  BattleObjectModuleAccessor **ppBVar7;
  float fVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV);
  iVar2 = lib::L2CValue::as_integer(pLVar4);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  ppBVar7 = &this->moduleAccessor;
  app::lua_bind::WorkModule__set_int_impl(*ppBVar7,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_INSTANCE_WORK_ID_FLAG_ATTACK_HI3);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_HI);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,false);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ATTACK_AIR);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ATTACK);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ATTACK_HI3);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ATTACK_S3);
        uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          app::lua_bind::WorkModule__clear_transition_term_impl(*ppBVar7);
          lib::L2CValue::L2CValue((L2CValue *)return_value,false);
          goto LAB_7100089e04;
        }
        iVar2 = app::lua_bind::FighterControlModuleImpl__get_attack_s3_turn_impl(*ppBVar7);
        lib::L2CValue::L2CValue(aLStack128,iVar2);
        lib::L2CValue::L2CValue(aLStack160,aLStack128);
        fVar8 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar7);
        lib::L2CValue::L2CValue(aLStack96,fVar8);
        lib::L2CValue::L2CValue(aLStack80,1.0);
        uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
LAB_7100089914:
          lib::L2CValue::L2CValue(aLStack80,-1.0);
          uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_COMMAND_TURN_LR_RIGHT);
            uVar5 = lib::L2CValue::operator__(aLStack160,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar5 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack144,true);
              goto LAB_7100089984;
            }
          }
          lib::L2CValue::L2CValue(aLStack144,false);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_COMMAND_TURN_LR_LEFT);
          uVar5 = lib::L2CValue::operator__(aLStack160,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) goto LAB_7100089914;
          lib::L2CValue::L2CValue(aLStack144,true);
        }
LAB_7100089984:
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,true);
          lib::L2CValue::operator_(aLStack112,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        pLVar4 = aLStack128;
LAB_71000899e8:
        lib::L2CValue::_L2CValue(pLVar4);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_INSTANCE_WORK_ID_FLAG_ATTACK_HI3);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar7,iVar2);
        lib::L2CValue::_L2CValue(aLStack80);
        iVar2 = app::lua_bind::ControlModule__get_attack_hi3_fb_kind_impl(*ppBVar7);
        lib::L2CValue::L2CValue(aLStack96,iVar2);
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_COMMAND_ATTACK3_KIND_B);
        uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) {
          app::lua_bind::PostureModule__reverse_lr_impl(*ppBVar7);
        }
      }
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_JUMP);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_JUMP_AERIAL);
        uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
          uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) {
            pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL_AERIAL);
            uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar5 & 1) == 0) {
              app::lua_bind::WorkModule__clear_transition_term_impl(*ppBVar7);
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_ATTACK_FALL);
              iVar2 = lib::L2CValue::as_integer(aLStack80);
              app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar7,iVar2);
            }
            else {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_ATTACK_FALL_AERIAL);
              iVar2 = lib::L2CValue::as_integer(aLStack80);
              app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar7,iVar2);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_ATTACK_FALL);
            iVar2 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar7,iVar2);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_ATTACK_JUMP_AERIAL);
          iVar2 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar7,iVar2);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_ATTACK_JUMP);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar7,iVar2);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_WALK);
        uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WALK_BRAKE);
          uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) {
            app::lua_bind::WorkModule__clear_transition_term_impl(*ppBVar7);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_ATTACK_WAIT);
            iVar2 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar7,iVar2);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_ATTACK_WAIT);
            iVar2 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar7,iVar2);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_ATTACK_WALK);
          iVar2 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar7,iVar2);
        }
      }
      else {
        app::lua_bind::PostureModule__reverse_lr_impl(*ppBVar7);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_ATTACK_WALK);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar7,iVar2);
      }
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack144,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack176,0x1d5e5c91ca);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar7,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack128,iVar2);
    lib::L2CValue::L2CValue(aLStack80,1);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_MINI_JUMP_ATTACK_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar7,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue((L2CValue *)return_value,true);
  }
  else {
    iVar2 = app::lua_bind::ControlModule__get_attack_air_kind_impl(*ppBVar7);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_COMMAND_ATTACK_AIR_KIND_NONE);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      bVar1 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::FighterControlModuleImpl__update_attack_air_kind_impl
                (*ppBVar7,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack80);
      iVar2 = app::lua_bind::ControlModule__get_attack_air_kind_impl(*ppBVar7);
      lib::L2CValue::L2CValue(aLStack80,iVar2);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_COMMAND_ATTACK_AIR_KIND_LW);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_COMMAND_ATTACK_AIR_KIND_F);
      uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_COMMAND_ATTACK_AIR_KIND_B);
        uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_COMMAND_ATTACK_AIR_KIND_HI);
          uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_HI);
            iVar2 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar7,iVar2);
            lib::L2CValue::_L2CValue(aLStack80);
          }
          pLVar4 = aLStack96;
          goto LAB_71000899e8;
        }
      }
      lua2cpp::L2CFighterCommon::status_pre_AttackAir(this);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_ATTACK_AIR_LW_START);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar7,iVar2);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,true);
    }
    lib::L2CValue::_L2CValue(aLStack96);
  }
LAB_7100089e04:
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

