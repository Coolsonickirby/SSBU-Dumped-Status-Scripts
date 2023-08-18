
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::KroolSpecialNSpit_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  Hash40 HVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  
  ppBVar9 = &this->moduleAccessor;
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    this_00 = &this->globalTable;
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar8,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_7100168f28;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar8,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      pLVar8 = aLStack128;
      goto LAB_7100169250;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar8,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) goto LAB_7100168f30;
  }
  else {
LAB_7100168f28:
    lib::L2CValue::_L2CValue(aLStack128);
LAB_7100168f30:
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KROOL_INSTANCE_WORK_ID_INT_SPECIAL_N_SPIT_TYPE);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack128,iVar4);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KROOL_SPECIAL_N_SPIT_TYPE_F);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KROOL_INSTANCE_WORK_ID_INT_SPECIAL_N_SPIT_TYPE);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack128,iVar4);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KROOL_SPECIAL_N_SPIT_TYPE_HI);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KROOL_INSTANCE_WORK_ID_INT_SPECIAL_N_SPIT_TYPE);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar4);
        lib::L2CValue::L2CValue(aLStack128,iVar4);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KROOL_SPECIAL_N_SPIT_TYPE_B);
        uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar5 & 1) == 0) goto LAB_7100169254;
        lib::L2CValue::L2CValue(aLStack224,0x100a4e3963);
        lib::L2CValue::L2CValue(aLStack240,0x148bfbb623);
        FUN_710016a3c0(this,aLStack224,aLStack240);
        lib::L2CValue::_L2CValue(aLStack240);
        pLVar8 = aLStack224;
      }
      else {
        lib::L2CValue::L2CValue(aLStack192,0x11c832a020);
        lib::L2CValue::L2CValue(aLStack208,0x15be6f543f);
        FUN_710016a3c0(this,aLStack192,aLStack208);
        lib::L2CValue::_L2CValue(aLStack208);
        pLVar8 = aLStack192;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,0x100d23fd7a);
      lib::L2CValue::L2CValue(aLStack176,0x148c96723a);
      FUN_710016a3c0(this,aLStack160,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      pLVar8 = aLStack160;
    }
LAB_7100169250:
    lib::L2CValue::_L2CValue(pLVar8);
  }
LAB_7100169254:
  HVar6 = app::lua_bind::MotionModule__motion_kind_2nd_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack128,HVar6);
  lib::L2CValue::L2CValue(aLStack112,0x100d23fd7a);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KROOL_STATUS_SPECIAL_N_WORK_FLOAT_MOTION_2ND_WAIGHT)
    ;
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack128,fVar10);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::operator_(aLStack112,aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    fVar10 = (float)lib::L2CValue::as_number(aLStack144);
    app::lua_bind::MotionModule__set_weight_impl(*ppBVar9,fVar10,true);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0x7fb997a80);
      fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack144,fVar10);
      fVar10 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack256,fVar10);
      lib::L2CValue::L2CValue(aLStack272,false);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      HVar6 = lib::L2CValue::as_hash(aLStack112);
      fVar10 = (float)lib::L2CValue::as_number(aLStack144);
      fVar11 = (float)lib::L2CValue::as_number(aLStack256);
      bVar2 = lib::L2CValue::as_bool(aLStack272);
      fVar12 = (float)lib::L2CValue::as_number(aLStack288);
      app::lua_bind::MotionModule__add_motion_2nd_impl
                (*ppBVar9,HVar6,fVar10,fVar11,(bool)(bVar2 & 1),fVar12);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KROOL_INSTANCE_WORK_ID_INT_SPECIAL_N_SPIT_TYPE);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue(aLStack128,iVar4);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KROOL_SPECIAL_N_SPIT_TYPE_F);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KROOL_STATUS_SPECIAL_N_FLAG_SPIT_TYPE_DECIDE);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar5 & 1) != 0) {
      FUN_710016a810(this);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KROOL_INSTANCE_WORK_ID_INT_SPECIAL_N_SPIT_TYPE);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack128,iVar4);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KROOL_SPECIAL_N_SPIT_TYPE_HI);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KROOL_INSTANCE_WORK_ID_INT_SPECIAL_N_SPIT_TYPE);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar4);
        lib::L2CValue::L2CValue(aLStack128,iVar4);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KROOL_SPECIAL_N_SPIT_TYPE_B);
        uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack336,0x100a4e3963);
          lib::L2CValue::L2CValue(aLStack352,0x148bfbb623);
          FUN_710016a3c0(this,aLStack336,aLStack352);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::L2CValue(aLStack112,0x100d23fd7a);
          fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
          lib::L2CValue::L2CValue(aLStack128,fVar10);
          fVar10 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar9);
          lib::L2CValue::L2CValue(aLStack144,fVar10);
          lib::L2CValue::L2CValue(aLStack256,false);
          lib::L2CValue::L2CValue(aLStack272,0.0);
          HVar6 = lib::L2CValue::as_hash(aLStack112);
          fVar10 = (float)lib::L2CValue::as_number(aLStack128);
          fVar11 = (float)lib::L2CValue::as_number(aLStack144);
          bVar2 = lib::L2CValue::as_bool(aLStack256);
          fVar12 = (float)lib::L2CValue::as_number(aLStack272);
          app::lua_bind::MotionModule__add_motion_2nd_impl
                    (*ppBVar9,HVar6,fVar10,fVar11,(bool)(bVar2 & 1),fVar12);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,1.0);
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_KROOL_STATUS_SPECIAL_N_WORK_FLOAT_MOTION_2ND_WAIGHT);
          fVar10 = (float)lib::L2CValue::as_number(aLStack112);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar4);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,0);
          lib::L2CValue::L2CValue(aLStack144,true);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          bVar2 = lib::L2CValue::as_bool(aLStack144);
          bVar2 = app::lua_bind::AttackModule__is_attack_impl(*ppBVar9,iVar4,(bool)(bVar2 & 1));
          lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack256,0x1af81118dd);
          uVar5 = lib::L2CValue::as_integer(aLStack112);
          uVar7 = lib::L2CValue::as_integer(aLStack256);
          iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar7);
          lib::L2CValue::L2CValue(aLStack144,iVar4);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,false);
          uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) != 0) {
            fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
            lib::L2CValue::L2CValue(aLStack256,fVar10);
            lib::L2CValue::L2CValue(aLStack112,1);
            lib::L2CValue::operator_(aLStack144,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            uVar5 = lib::L2CValue::operator__(aLStack272,aLStack256);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::_L2CValue(aLStack256);
            if ((uVar5 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ANIMCMD_GAME);
              lib::L2CValue::L2CValue(aLStack256,0x1bf2387e0b);
              iVar4 = lib::L2CValue::as_integer(aLStack112);
              HVar6 = lib::L2CValue::as_hash(aLStack256);
              app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar9,iVar4,HVar6,-1);
              lib::L2CValue::_L2CValue(aLStack256);
              lib::L2CValue::_L2CValue(aLStack112);
            }
          }
          lib::L2CValue::_L2CValue(aLStack144);
          lVar1 = -0x70;
          goto LAB_7100169a38;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack304,0x11c832a020);
        lib::L2CValue::L2CValue(aLStack320,0x15be6f543f);
        FUN_710016a3c0(this,aLStack304,aLStack320);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::L2CValue(aLStack112,0x100d23fd7a);
        fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack128,fVar10);
        fVar10 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack144,fVar10);
        lib::L2CValue::L2CValue(aLStack256,false);
        lib::L2CValue::L2CValue(aLStack272,0.0);
        HVar6 = lib::L2CValue::as_hash(aLStack112);
        fVar10 = (float)lib::L2CValue::as_number(aLStack128);
        fVar11 = (float)lib::L2CValue::as_number(aLStack144);
        bVar2 = lib::L2CValue::as_bool(aLStack256);
        fVar12 = (float)lib::L2CValue::as_number(aLStack272);
        app::lua_bind::MotionModule__add_motion_2nd_impl
                  (*ppBVar9,HVar6,fVar10,fVar11,(bool)(bVar2 & 1),fVar12);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,1.0);
        lib::L2CValue::L2CValue
                  (aLStack128,_FIGHTER_KROOL_STATUS_SPECIAL_N_WORK_FLOAT_MOTION_2ND_WAIGHT);
        fVar10 = (float)lib::L2CValue::as_number(aLStack112);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar4);
        lib::L2CValue::_L2CValue(aLStack128);
        lVar1 = -0x60;
LAB_7100169a38:
        lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
      }
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KROOL_GENERATE_ARTICLE_BLUNDERBUSS);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      bVar2 = app::lua_bind::ArticleModule__is_exist_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KROOL_INSTANCE_WORK_ID_INT_SPECIAL_N_SPIT_TYPE);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar4);
        lib::L2CValue::L2CValue(aLStack128,iVar4);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KROOL_SPECIAL_N_SPIT_TYPE_HI);
        uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack144,_FIGHTER_KROOL_INSTANCE_WORK_ID_INT_SPECIAL_N_SPIT_TYPE);
          iVar4 = lib::L2CValue::as_integer(aLStack144);
          iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar4);
          lib::L2CValue::L2CValue(aLStack128,iVar4);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KROOL_SPECIAL_N_SPIT_TYPE_B);
          uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((uVar5 & 1) == 0) goto LAB_7100169c58;
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KROOL_GENERATE_ARTICLE_BLUNDERBUSS);
          lib::L2CValue::L2CValue(aLStack128,0x64eef07e9);
          lib::L2CValue::L2CValue(aLStack144,true);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          HVar6 = lib::L2CValue::as_hash(aLStack128);
          bVar2 = lib::L2CValue::as_bool(aLStack144);
          app::lua_bind::ArticleModule__change_motion_impl
                    (*ppBVar9,iVar4,HVar6,(bool)(bVar2 & 1),-1.0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KROOL_GENERATE_ARTICLE_BLUNDERBUSS);
          lib::L2CValue::L2CValue(aLStack128,0x7c51b6b20);
          lib::L2CValue::L2CValue(aLStack144,true);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          HVar6 = lib::L2CValue::as_hash(aLStack128);
          bVar2 = lib::L2CValue::as_bool(aLStack144);
          app::lua_bind::ArticleModule__change_motion_impl
                    (*ppBVar9,iVar4,HVar6,(bool)(bVar2 & 1),-1.0);
        }
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
      }
    }
  }
LAB_7100169c58:
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack368,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar5 = lib::L2CValue::operator__(aLStack256,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) goto LAB_7100169d38;
    }
    iVar4 = 1;
    goto LAB_7100169fc8;
  }
  lib::L2CValue::_L2CValue(aLStack128);
LAB_7100169d38:
  bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar3 & 1U) == 0) {
LAB_7100169e74:
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KROOL_STATUS_SPECIAL_N_FLAG_SPIT);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KROOL_STATUS_SPECIAL_N_FLAG_SPIT_END);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KROOL_STATUS_SPECIAL_N_FLAG_SPIT);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_KROOL_INSTANCE_WORK_ID_FLAG_SPECIAL_N_SUCTION_IRONBALL);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KROOL_GENERATE_ARTICLE_SPITBALL);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::ArticleModule__generate_article_impl(*ppBVar9,iVar4,false,-1);
        lib::L2CValue::_L2CValue(aLStack112);
      }
    }
    FUN_710016ad30(this);
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar8,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) goto LAB_7100169e74;
      lib::L2CValue::L2CValue(aLStack416,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack432,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack416);
    }
    else {
      lib::L2CValue::L2CValue(aLStack384,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack400,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack384);
    }
  }
  iVar4 = 0;
LAB_7100169fc8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}

