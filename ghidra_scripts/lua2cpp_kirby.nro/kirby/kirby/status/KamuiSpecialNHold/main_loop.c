
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::KamuiSpecialNHold_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
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
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack272,0);
  ppBVar10 = &this->moduleAccessor;
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack272,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar6 = lib::L2CValue::operator__(aLStack272,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack144,CONTROL_PAD_BUTTON_SPECIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::ControlModule__check_button_off_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) goto LAB_7100179900;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_KIRBY_STATUS_KIND_KAMUI_SPECIAL_N_SHOOT);
    lib::L2CValue::L2CValue(aLStack304,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710017a5a4;
  }
LAB_7100179900:
  lib::L2CValue::L2CValue(aLStack320,0xe06860a20);
  lib::L2CValue::L2CValue(aLStack336,0x1244d4ffef);
  lib::L2CValue::L2CValue(aLStack368,aLStack272);
  lib::L2CValue::L2CValue(aLStack384,aLStack320);
  lib::L2CValue::L2CValue(aLStack400,aLStack336);
  lib::L2CValue::L2CValue(aLStack416,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack432,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  lib::L2CValue::L2CValue(aLStack448,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
  lib::L2CValue::L2CValue(aLStack464,GROUND_CORRECT_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack496,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack512,0xec7acfd87);
  uVar6 = lib::L2CValue::as_integer(aLStack496);
  uVar7 = lib::L2CValue::as_integer(aLStack512);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack480,iVar3);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar6 = lib::L2CValue::operator__(aLStack368,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  this_00 = &this->globalTable;
  if ((uVar6 & 1) == 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar8,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) goto LAB_7100179a14;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar8,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) goto LAB_7100179a14;
    }
    lib::L2CValue::L2CValue(aLStack352,false);
  }
  else {
LAB_7100179a14:
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar8,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack224,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x20);
      lib::L2CValue::_L2CValue(aLStack224);
      GVar4 = lib::L2CValue::as_integer(aLStack464);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
      iVar3 = lib::L2CValue::as_integer(aLStack432);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
      lib::L2CValue::operator_(aLStack208,aLStack400);
    }
    else {
      lib::L2CValue::L2CValue(aLStack224,_SITUATION_KIND_GROUND);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x20);
      lib::L2CValue::_L2CValue(aLStack224);
      GVar4 = lib::L2CValue::as_integer(aLStack448);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
      iVar3 = lib::L2CValue::as_integer(aLStack416);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
      lib::L2CValue::operator_(aLStack208,aLStack384);
    }
    lib::L2CValue::L2CValue(aLStack112,0x7fb997a80);
    uVar6 = lib::L2CValue::operator__(aLStack208,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar6 = lib::L2CValue::operator__(aLStack368,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack240,aLStack208);
        lib::L2CValue::L2CValue(aLStack256,aLStack480);
        lib::L2CValue::L2CValue(aLStack128,0);
        lib::L2CValue::L2CValue(aLStack144,0);
        lib::L2CValue::L2CValue(aLStack160,0);
        lib::L2CValue::L2CValue(aLStack176,0);
        lib::L2CValue::L2CValue(aLStack112,1.0);
        lib::L2CValue::operator_(aLStack144,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::operator_(aLStack128,aLStack256);
        HVar9 = lib::L2CValue::as_hash(aLStack240);
        fVar12 = (float)app::lua_bind::FighterMotionModuleImpl__get_cancel_frame_impl
                                  (*ppBVar10,HVar9,true);
        lib::L2CValue::L2CValue(aLStack112,fVar12);
        lib::L2CValue::operator_(aLStack176,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0.0);
          uVar6 = lib::L2CValue::operator__(aLStack176,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar6 & 1) == 0) {
            HVar9 = lib::L2CValue::as_hash(aLStack240);
            uVar5 = app::lua_bind::FighterMotionModuleImpl__end_frame_from_hash_kirby_copy_impl
                              (*ppBVar10,HVar9);
            lib::L2CValue::L2CValue(aLStack112,uVar5);
            lib::L2CValue::operator_(aLStack160,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::operator_(aLStack160,aLStack128);
            lib::L2CValue::operator_(aLStack144,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
          }
        }
        lib::L2CValue::L2CValue(aLStack112,0);
        lib::L2CValue::L2CValue(aLStack192,false);
        HVar9 = lib::L2CValue::as_hash(aLStack240);
        fVar12 = (float)lib::L2CValue::as_number(aLStack112);
        fVar11 = (float)lib::L2CValue::as_number(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack192);
        app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                  (*ppBVar10,HVar9,fVar12,fVar11,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
      }
      else {
        HVar9 = lib::L2CValue::as_hash(aLStack208);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (*ppBVar10,HVar9,-1.0,1.0,0.0,false,false);
      }
    }
    lib::L2CValue::L2CValue(aLStack352,true);
  }
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar6 = lib::L2CValue::operator__(aLStack352,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack144,0x1a82862070);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    uVar7 = lib::L2CValue::as_integer(aLStack144);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack112,fVar12);
    fVar12 = (float)lib::L2CValue::as_number(aLStack112);
    app::lua_bind::MotionModule__set_rate_impl(*ppBVar10,fVar12);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,true);
      uVar6 = lib::L2CValue::operator__(aLStack272,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
        lib::L2CValue::L2CValue(aLStack128,fVar12);
        lib::L2CValue::L2CValue(aLStack112,-1.0);
        uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
          uVar6 = lib::L2CValue::operator__(pLVar8,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack144,0x1244d4ffef);
            lib::L2CValue::L2CValue(aLStack160,true);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            HVar9 = lib::L2CValue::as_hash(aLStack144);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar10,iVar3,HVar9,(bool)(bVar1 & 1),-1.0);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack144,0xe06860a20);
            lib::L2CValue::L2CValue(aLStack160,true);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            HVar9 = lib::L2CValue::as_hash(aLStack144);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar10,iVar3,HVar9,(bool)(bVar1 & 1),-1.0);
          }
        }
        else {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
          uVar6 = lib::L2CValue::operator__(pLVar8,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack144,0x14cc1a3a6d);
            lib::L2CValue::L2CValue(aLStack160,true);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            HVar9 = lib::L2CValue::as_hash(aLStack144);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar10,iVar3,HVar9,(bool)(bVar1 & 1),-1.0);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack144,0x104dafb52d);
            lib::L2CValue::L2CValue(aLStack160,true);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            HVar9 = lib::L2CValue::as_hash(aLStack144);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar10,iVar3,HVar9,(bool)(bVar1 & 1),-1.0);
          }
        }
      }
      else {
        fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
        lib::L2CValue::L2CValue(aLStack128,fVar12);
        lib::L2CValue::L2CValue(aLStack112,-1.0);
        uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
          uVar6 = lib::L2CValue::operator__(pLVar8,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack144,0x1244d4ffef);
            lib::L2CValue::L2CValue(aLStack160,false);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            HVar9 = lib::L2CValue::as_hash(aLStack144);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar10,iVar3,HVar9,(bool)(bVar1 & 1),-1.0);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack144,0xe06860a20);
            lib::L2CValue::L2CValue(aLStack160,false);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            HVar9 = lib::L2CValue::as_hash(aLStack144);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar10,iVar3,HVar9,(bool)(bVar1 & 1),-1.0);
          }
        }
        else {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
          uVar6 = lib::L2CValue::operator__(pLVar8,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack144,0x14cc1a3a6d);
            lib::L2CValue::L2CValue(aLStack160,false);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            HVar9 = lib::L2CValue::as_hash(aLStack144);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar10,iVar3,HVar9,(bool)(bVar1 & 1),-1.0);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack144,0x104dafb52d);
            lib::L2CValue::L2CValue(aLStack160,false);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            HVar9 = lib::L2CValue::as_hash(aLStack144);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar10,iVar3,HVar9,(bool)(bVar1 & 1),-1.0);
          }
        }
      }
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
      lib::L2CValue::L2CValue(aLStack144,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack160,0x1a82862070);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      uVar7 = lib::L2CValue::as_integer(aLStack160);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack128,fVar12);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      fVar12 = (float)lib::L2CValue::as_number(aLStack128);
      app::lua_bind::ArticleModule__set_rate_impl(*ppBVar10,iVar3,fVar12);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
LAB_710017a5a4:
  lib::L2CValue::_L2CValue(aLStack272);
  return;
}

