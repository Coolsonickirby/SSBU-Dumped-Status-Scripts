
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKirby::status::MetaknightSpecialNSpin_exec(void *this)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  Hash40 HVar9;
  L2CValue *this_00;
  L2CValue *return_value;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
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
  
  lib::L2CValue::L2CValue(aLStack128,2);
  lib::L2CValue::L2CValue(aLStack144,3);
  lib::L2CValue::L2CValue(aLStack160,4);
  lib::L2CValue::L2CValue(aLStack176,5);
  lib::L2CValue::L2CValue(aLStack192,6);
  lib::L2CValue::L2CValue(aLStack208,7);
  lib::L2CValue::operator_(aLStack208,aLStack128);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_FLAG_EFFECT_ON);
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  ppBVar10 = (BattleObjectModuleAccessor **)((long)this + 0x40);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar7 = lib::L2CValue::operator__(aLStack240,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_FLAG_EFFECT_ON);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue
            (aLStack256,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_WORK_INT_BUTTON_UNABLE_COUNTER);
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack240,iVar3);
  lib::L2CValue::L2CValue(aLStack112,0);
  uVar7 = lib::L2CValue::operator__(aLStack112,aLStack240);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((uVar7 & 1) == 0) {
    fVar11 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack112,fVar11);
    lib::L2CValue::L2CValue(aLStack272,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack288,0x170a6710c5);
    uVar7 = lib::L2CValue::as_integer(aLStack272);
    uVar8 = lib::L2CValue::as_integer(aLStack288);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack256,fVar11);
    lib::L2CValue::operator_(aLStack112,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack256,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack272,0xd8ebcb613);
    uVar7 = lib::L2CValue::as_integer(aLStack256);
    uVar8 = lib::L2CValue::as_integer(aLStack272);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack112,fVar11);
    uVar7 = lib::L2CValue::operator__(aLStack240,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::operator_(aLStack240,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    fVar11 = (float)lib::L2CValue::as_number(aLStack240);
    app::lua_bind::MotionModule__set_rate_impl(*ppBVar10,fVar11);
    goto LAB_71001ec428;
  }
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_WORK_INT_BUTTON_UNABLE_COUNTER);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__dec_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  fVar11 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack112,fVar11);
  lib::L2CValue::L2CValue(aLStack272,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack288,0x90468c966);
  uVar7 = lib::L2CValue::as_integer(aLStack272);
  uVar8 = lib::L2CValue::as_integer(aLStack288);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack256,fVar11);
  lib::L2CValue::operator_(aLStack112,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue
            (aLStack256,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_WORK_INT_BUTTON_ATTACK_COUNTER);
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::L2CValue(aLStack288,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack304,0x10e3f402e8);
  uVar7 = lib::L2CValue::as_integer(aLStack288);
  uVar8 = lib::L2CValue::as_integer(aLStack304);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack272,iVar3);
  uVar7 = lib::L2CValue::operator_(aLStack112,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack256,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_FLAG_BUTTON_SPECIAL_ON);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_WORK_INT_BUTTON_ATTACK_COUNTER
                );
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__inc_int_impl(*ppBVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      HVar9 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack256,HVar9);
      lib::L2CValue::L2CValue(aLStack112,0xe0b4623a8);
      uVar7 = lib::L2CValue::operator__(aLStack256,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0x19d57d8d31);
        uVar7 = lib::L2CValue::operator__(aLStack256,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar7 & 1) != 0) goto LAB_71001ebda4;
        lib::L2CValue::L2CValue(aLStack112,0x11e8db466c);
        uVar7 = lib::L2CValue::operator__(aLStack256,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ANIMCMD_GAME);
          lib::L2CValue::L2CValue(aLStack272,0x160e93f755);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          HVar9 = lib::L2CValue::as_hash(aLStack272);
          app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar10,iVar3,HVar9,-1);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ANIMCMD_SOUND);
          lib::L2CValue::L2CValue(aLStack272,0x173cb735ed);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          HVar9 = lib::L2CValue::as_hash(aLStack272);
          app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar10,iVar3,HVar9,-1);
          goto LAB_71001ebe44;
        }
        lib::L2CValue::L2CValue(aLStack112,0x119fdc76fa);
        uVar7 = lib::L2CValue::operator__(aLStack256,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ANIMCMD_GAME);
          lib::L2CValue::L2CValue(aLStack272,0x167994c7c3);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          HVar9 = lib::L2CValue::as_hash(aLStack272);
          app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar10,iVar3,HVar9,-1);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ANIMCMD_SOUND);
          lib::L2CValue::L2CValue(aLStack272,0x174bb0057b);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          HVar9 = lib::L2CValue::as_hash(aLStack272);
          app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar10,iVar3,HVar9,-1);
          goto LAB_71001ebe44;
        }
        lib::L2CValue::L2CValue(aLStack112,0x1101b8e359);
        uVar7 = lib::L2CValue::operator__(aLStack256,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ANIMCMD_GAME);
          lib::L2CValue::L2CValue(aLStack272,0x16e7f05260);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          HVar9 = lib::L2CValue::as_hash(aLStack272);
          app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar10,iVar3,HVar9,-1);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ANIMCMD_SOUND);
          lib::L2CValue::L2CValue(aLStack272,0x17893b93ba);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          HVar9 = lib::L2CValue::as_hash(aLStack272);
          app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar10,iVar3,HVar9,-1);
          goto LAB_71001ebe44;
        }
      }
      else {
LAB_71001ebda4:
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ANIMCMD_GAME);
        lib::L2CValue::L2CValue(aLStack272,0x13daa68ed4);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        HVar9 = lib::L2CValue::as_hash(aLStack272);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar10,iVar3,HVar9,-1);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ANIMCMD_SOUND);
        lib::L2CValue::L2CValue(aLStack272,0x14be48964a);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        HVar9 = lib::L2CValue::as_hash(aLStack272);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar10,iVar3,HVar9,-1);
LAB_71001ebe44:
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_FLAG_ADD_ATTACK_ON);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0);
      lib::L2CValue::L2CValue
                (aLStack256,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_WORK_INT_ATTACK_ID_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = lib::L2CValue::as_integer(aLStack256);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  lib::L2CValue::L2CValue
            (aLStack256,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_WORK_INT_BUTTON_HOP_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::L2CValue(aLStack288,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack304,0x1bb74ee162);
  uVar7 = lib::L2CValue::as_integer(aLStack288);
  uVar8 = lib::L2CValue::as_integer(aLStack304);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack272,iVar3);
  uVar7 = lib::L2CValue::operator__(aLStack272,aLStack112);
  if ((uVar7 & 1) == 0) {
    bVar1 = 0;
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack336,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_FLAG_BUTTON_SPECIAL_ON);
    iVar3 = lib::L2CValue::as_integer(aLStack336);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack320,(bool)(bVar1 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack320);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack336);
  }
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((bVar1 & 1) != 0) {
    iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack256,iVar3);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(aLStack256,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_METAKNIGHT_SPECIAL_AIR_N);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack352,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
      GVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__set_correct_impl(*ppBVar10,GVar5);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack272,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack288,0x1057cbe8fe);
    uVar7 = lib::L2CValue::as_integer(aLStack272);
    uVar8 = lib::L2CValue::as_integer(aLStack288);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack256,fVar11);
    lib::L2CValue::operator_(aLStack240,aLStack256);
    lib::L2CValue::operator_(aLStack240,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
  }
  lib::L2CValue::L2CValue(aLStack256,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack272,0xd8ebcb613);
  uVar7 = lib::L2CValue::as_integer(aLStack256);
  uVar8 = lib::L2CValue::as_integer(aLStack272);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack112,fVar11);
  uVar7 = lib::L2CValue::operator__(aLStack240,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack256,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack272,0x96ddc1c8d);
    uVar7 = lib::L2CValue::as_integer(aLStack256);
    uVar8 = lib::L2CValue::as_integer(aLStack272);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack112,fVar11);
    uVar7 = lib::L2CValue::operator_(aLStack112,aLStack240);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack256,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack272,0x96ddc1c8d);
      uVar7 = lib::L2CValue::as_integer(aLStack256);
      uVar8 = lib::L2CValue::as_integer(aLStack272);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack112,fVar11);
      lib::L2CValue::operator_(aLStack240,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack272);
      this_00 = aLStack256;
      goto LAB_71001ec414;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::operator_(aLStack240,aLStack112);
    this_00 = aLStack112;
LAB_71001ec414:
    lib::L2CValue::_L2CValue(this_00);
  }
  fVar11 = (float)lib::L2CValue::as_number(aLStack240);
  app::lua_bind::MotionModule__set_rate_impl(*ppBVar10,fVar11);
LAB_71001ec428:
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_FLAG_ADD_ATTACK_ON);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              (aLStack240,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_WORK_INT_ATTACK_ID_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack272,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack288,0x1686c61dd7);
    uVar7 = lib::L2CValue::as_integer(aLStack272);
    uVar8 = lib::L2CValue::as_integer(aLStack288);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack256,iVar3);
    uVar7 = lib::L2CValue::operator__(aLStack256,aLStack112);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack240);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_WORK_INT_ATTACK_ID_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__inc_int_impl(*ppBVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      lib::L2CValue::L2CValue(aLStack112,1);
      lib::L2CValue::operator_(aLStack208,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      iVar4 = lib::L2CValue::as_integer(aLStack240);
      lib::L2CValue::_L2CValue(aLStack240);
      if (iVar3 <= iVar4) {
        iVar3 = iVar3 + -1;
        do {
          lib::L2CValue::L2CValue(aLStack256,iVar3 + 1);
          iVar6 = lib::L2CValue::as_integer(aLStack256);
          bVar1 = app::lua_bind::AttackModule__is_attack_impl(*ppBVar10,iVar6,false);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack112,true);
          uVar7 = lib::L2CValue::operator__(aLStack240,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack256);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,iVar3 + 1);
            iVar6 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::AttackModule__clear_impl(*ppBVar10,iVar6,false);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_FLAG_ADD_ATTACK_ON);
            iVar6 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar6);
            lib::L2CValue::_L2CValue(aLStack112);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar4);
      }
    }
  }
  lib::L2CValue::L2CValue(return_value,0);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

