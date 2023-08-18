
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMurabito::status::SpecialS_main_loop(L2CFighterMurabito *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  BattleObjectModuleAccessor **ppBVar7;
  float fVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,8);
  lib::L2CValue::operator_(pLVar4);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
LAB_7100024728:
    ppBVar7 = &this->moduleAccessor;
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar7);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
LAB_7100024808:
      bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar7);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar1 & 1U) == 0) {
        bVar2 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar7);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,false);
          FUN_7100023b10(this,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
        }
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MURABITO_STATUS_SPECIAL_S_FLAG_FALL);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar1 & 1U) != 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) != 0) {
            iVar3 = app::lua_bind::KineticModule__get_kinetic_type_impl(*ppBVar7);
            lib::L2CValue::L2CValue(aLStack128,iVar3);
            lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_TYPE_RESET);
            uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((uVar5 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_FALL);
              iVar3 = lib::L2CValue::as_integer(aLStack80);
              app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar7,iVar3);
              lib::L2CValue::_L2CValue(aLStack80);
            }
          }
        }
        iVar3 = 0;
        goto LAB_7100024b0c;
      }
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MURABITO_STATUS_SPECIAL_S_FLAG_RIDE);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0);
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::operator_(aLStack112,aLStack80);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::operator_(aLStack112,aLStack80);
        }
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,aLStack112);
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
        lib::L2CValue::_L2CValue(aLStack128);
        pLVar4 = aLStack80;
        goto LAB_7100024af8;
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_S_RIDE);
      lib::L2CValue::L2CValue(aLStack112,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
      goto LAB_71000248b8;
    }
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar4 = aLStack144;
LAB_7100024af8:
      lib::L2CValue::_L2CValue(pLVar4);
      pLVar4 = aLStack112;
      goto LAB_7100024b00;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_7100024808;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_STATUS_SPECIAL_S_FLAG_CLAYROCKET);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    ppBVar7 = &this->moduleAccessor;
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) goto LAB_7100024728;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_SPECIAL_S_FLAG_CLAYROCKET);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar7,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_STATUS_SPECIAL_S_FLAG_CLAYROCKET_EXIST);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) goto LAB_7100024728;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_SPECIAL_S_FLAG_CLAYROCKET_SHOOT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar7,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar7,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_CLAYROCKET_SHOOT_SHOOT);
      FUN_7100023390(this,aLStack96);
      pLVar4 = aLStack96;
LAB_7100024c68:
      lib::L2CValue::_L2CValue(pLVar4);
LAB_7100024c6c:
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_TYPE_RESET);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar7,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      goto LAB_7100024728;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MURABITO_STATUS_SPECIAL_S_FLAG_CLAYROCKET_BURST);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    lib::L2CValue::operator_(aLStack96);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar1 & 1U) == 0) {
LAB_7100024b4c:
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MURABITO_STATUS_SPECIAL_S_FLAG_CLAYROCKET_BURST);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack128,0x1115d33125);
        uVar5 = lib::L2CValue::as_integer(aLStack80);
        uVar6 = lib::L2CValue::as_integer(aLStack128);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack112,fVar8);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0.0);
        uVar5 = lib::L2CValue::operator_(aLStack80,aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,1.0);
          lib::L2CValue::operator_(aLStack80,aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          fVar8 = (float)lib::L2CValue::as_number(aLStack128);
          app::lua_bind::MotionModule__set_whole_rate_impl(*ppBVar7,fVar8);
          lib::L2CValue::_L2CValue(aLStack128);
        }
        pLVar4 = aLStack112;
        goto LAB_7100024c68;
      }
      goto LAB_7100024c6c;
    }
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_CLAYROCKET_SHOOT_RIDE);
    FUN_7100023390(this,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MURABITO_STATUS_SPECIAL_S_FLAG_CLAYROCKET_BURST);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) goto LAB_7100024b4c;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_SPECIAL_S_FLAG_RIDE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar7,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_S_RIDE);
    lib::L2CValue::L2CValue(aLStack112,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
LAB_71000248b8:
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar4 = aLStack80;
LAB_7100024b00:
    lib::L2CValue::_L2CValue(pLVar4);
  }
  iVar3 = 1;
LAB_7100024b0c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

