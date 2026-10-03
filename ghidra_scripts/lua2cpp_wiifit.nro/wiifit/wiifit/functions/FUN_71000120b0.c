
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_71000120b0(L2CFighterWiifit *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
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
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue(aLStack304,false);
  lib::L2CValue::L2CValue(aLStack320,0);
  lib::L2CValue::L2CValue(aLStack336,0);
  lib::L2CValue::L2CValue(aLStack352,0);
  lib::L2CValue::L2CValue(aLStack368,0);
  lib::L2CValue::L2CValue(aLStack384,0);
  lib::L2CValue::L2CValue(aLStack400,0);
  lib::L2CValue::L2CValue(aLStack416,0);
  lib::L2CValue::L2CValue(aLStack96,false);
  lib::L2CValue::operator=(aLStack144,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue(aLStack432,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack448,0x2070570626);
  uVar5 = lib::L2CValue::as_integer(aLStack432);
  uVar6 = lib::L2CValue::as_integer(aLStack448);
  ppBVar8 = &this->moduleAccessor;
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  uVar5 = lib::L2CValue::operator<=(aLStack96,pLVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack432,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack432);
    bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack464,_CONTROL_PAD_BUTTON_ATTACK);
      iVar3 = lib::L2CValue::as_integer(aLStack464);
      bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack448,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack448);
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::~L2CValue(aLStack464);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack432);
      if ((bVar2 & 1U) != 0) goto LAB_7100012344;
    }
    else {
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack432);
LAB_7100012344:
      lib::L2CValue::L2CValue(aLStack96,true);
      lib::L2CValue::operator=(aLStack144,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack432,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack432);
    bVar1 = app::lua_bind::ControlModule__check_button_release_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack432);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,true);
      lib::L2CValue::operator=(aLStack144,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue(aLStack432,_FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_WAZA_RATE);
  iVar3 = lib::L2CValue::as_integer(aLStack432);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::operator=(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack448,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack464,0x256f89db4b);
    uVar5 = lib::L2CValue::as_integer(aLStack448);
    uVar6 = lib::L2CValue::as_integer(aLStack464);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack432,iVar3);
    lib::L2CValue::L2CValue(aLStack496,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack512,0x256b13ea61);
    uVar5 = lib::L2CValue::as_integer(aLStack496);
    uVar6 = lib::L2CValue::as_integer(aLStack512);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack480,iVar3);
    lib::L2CValue::operator-(aLStack432,aLStack480);
    lib::L2CValue::operator=(aLStack416,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::~L2CValue(aLStack512);
    lib::L2CValue::~L2CValue(aLStack496);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue(aLStack448);
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator-(aLStack96,aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::operator*(aLStack464,aLStack416);
    lib::L2CValue::L2CValue(aLStack480,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack496,0x256b13ea61);
    uVar5 = lib::L2CValue::as_integer(aLStack480);
    uVar6 = lib::L2CValue::as_integer(aLStack496);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::operator+(aLStack448,aLStack96);
    lib::L2CValue::operator=(aLStack128,aLStack432);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack496);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::~L2CValue(aLStack448);
    pLVar4 = aLStack464;
  }
  else {
    lib::L2CValue::L2CValue(aLStack432,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack448,0x256f89db4b);
    uVar5 = lib::L2CValue::as_integer(aLStack432);
    uVar6 = lib::L2CValue::as_integer(aLStack448);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::operator=(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack448);
    pLVar4 = aLStack432;
  }
  lib::L2CValue::~L2CValue(pLVar4);
  lib::L2CValue::L2CValue
            (aLStack432,_FIGHTER_WIIFIT_STATUS_SPECIAL_LW_WORK_FLOAT_SUBSTANCE_END_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack432);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::operator=(aLStack368,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::operator-(aLStack368,aLStack128);
  lib::L2CValue::operator=(aLStack384,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator+(pLVar4,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WIIFIT_STATUS_SPECIAL_LW_WORK_FLOAT_STATUS_FRAME);
  fVar9 = (float)lib::L2CValue::as_number(aLStack432);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator+(aLStack384,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_WIIFIT_STATUS_SPECIAL_LW_WORK_FLOAT_SUCCESS_FRAME_START);
  fVar9 = (float)lib::L2CValue::as_number(aLStack432);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator+(aLStack368,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WIIFIT_STATUS_SPECIAL_LW_WORK_FLOAT_SUCCESS_FRAME_END);
  fVar9 = (float)lib::L2CValue::as_number(aLStack432);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack432);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,false);
    lib::L2CValue::operator=(aLStack304,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0xe);
    uVar5 = lib::L2CValue::operator<=(aLStack384,pLVar4);
    if ((uVar5 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0xe);
      uVar5 = lib::L2CValue::operator<=(pLVar4,aLStack368);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,true);
        lib::L2CValue::operator=(aLStack304,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
      }
    }
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack304);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack560,_FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_FAILURE);
      lib::L2CValue::L2CValue(aLStack576,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
      lib::L2CValue::~L2CValue(aLStack576);
      lib::L2CValue::~L2CValue(aLStack560);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack528,_FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_SUCCESS);
      lib::L2CValue::L2CValue(aLStack544,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
      lib::L2CValue::~L2CValue(aLStack544);
      lib::L2CValue::~L2CValue(aLStack528);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    goto LAB_7100013410;
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack448,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_ESCAPE_AIR);
      iVar3 = lib::L2CValue::as_integer(aLStack448);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack432,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator==(aLStack432,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack448);
      if ((uVar5 & 1) != 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x1f);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_FLAG_GUARD_TRIGGER);
        lib::L2CValue::operator&(pLVar4,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack432);
        lib::L2CValue::~L2CValue(aLStack432);
        if ((bVar2 & 1U) != 0) {
          FUN_710000cf80(this);
          lib::L2CValue::L2CValue(aLStack688,FIGHTER_STATUS_KIND_ESCAPE_AIR);
          lib::L2CValue::L2CValue(aLStack704,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
          lib::L2CValue::~L2CValue(aLStack704);
          lib::L2CValue::~L2CValue(aLStack688);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_7100013410;
        }
      }
    }
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x1f);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_FLAG_GUARD_TRIGGER);
    lib::L2CValue::operator&(pLVar4,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack432);
    lib::L2CValue::~L2CValue(aLStack432);
    if ((bVar2 & 1U) != 0) {
      FUN_710000cf80(this);
      lib::L2CValue::L2CValue(aLStack592,FIGHTER_STATUS_KIND_GUARD_ON);
      lib::L2CValue::L2CValue(aLStack608,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::~L2CValue(aLStack608);
      lib::L2CValue::~L2CValue(aLStack592);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_7100013410;
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x21);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_F);
    lib::L2CValue::operator&(pLVar4,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack432);
    lib::L2CValue::~L2CValue(aLStack432);
    if ((bVar2 & 1U) != 0) {
      FUN_710000cf80(this);
      lib::L2CValue::L2CValue(aLStack624,_FIGHTER_STATUS_KIND_ESCAPE_F);
      lib::L2CValue::L2CValue(aLStack640,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::~L2CValue(aLStack640);
      lib::L2CValue::~L2CValue(aLStack624);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_7100013410;
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x21);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_B);
    lib::L2CValue::operator&(pLVar4,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack432);
    lib::L2CValue::~L2CValue(aLStack432);
    if ((bVar2 & 1U) != 0) {
      FUN_710000cf80(this);
      lib::L2CValue::L2CValue(aLStack656,FIGHTER_STATUS_KIND_ESCAPE_B);
      lib::L2CValue::L2CValue(aLStack672,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x70,(L2CValue)0x60);
      lib::L2CValue::~L2CValue(aLStack672);
      lib::L2CValue::~L2CValue(aLStack656);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_7100013410;
    }
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack720,_FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_FAILURE);
    lib::L2CValue::L2CValue(aLStack736,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
    lib::L2CValue::~L2CValue(aLStack736);
    lib::L2CValue::~L2CValue(aLStack720);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100013410;
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack432,(bool)(bVar1 & 1));
  lib::L2CValue::operator!(aLStack432);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack432);
  if ((bVar2 & 1U) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator==(pLVar4,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0xab6928cf2);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack432,_FIGHTER_WIIFIT_STATUS_SPECIAL_LW_WORK_FLOAT_MOTION_STEP)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack432);
        fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack96,fVar9);
        fVar9 = (float)lib::L2CValue::as_number(aLStack96);
        app::lua_bind::MotionModule__set_rate_impl(*ppBVar8,fVar9);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack432);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WIIFIT_STATUS_SPECIAL_LW_FLAG_SET_GRAVITY);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
        goto LAB_7100012f88;
      }
    }
    else {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator==(pLVar4,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0xe46c0e666);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack432,_FIGHTER_WIIFIT_STATUS_SPECIAL_LW_WORK_FLOAT_MOTION_STEP)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack432);
        fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack96,fVar9);
        fVar9 = (float)lib::L2CValue::as_number(aLStack96);
        app::lua_bind::MotionModule__set_rate_impl(*ppBVar8,fVar9);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack432);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WIIFIT_STATUS_SPECIAL_LW_FLAG_SET_GRAVITY);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
LAB_7100012f88:
        lib::L2CValue::~L2CValue(aLStack96);
      }
    }
  }
  fVar9 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack448,fVar9);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  lib::L2CValue::operator*(aLStack96,aLStack448);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::operator=(aLStack336,aLStack432);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::operator=(aLStack192,aLStack336);
  fVar9 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::operator=(aLStack224,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack432,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack448,0x21a6281763);
  uVar5 = lib::L2CValue::as_integer(aLStack432);
  uVar6 = lib::L2CValue::as_integer(aLStack448);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::operator=(aLStack272,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::operator-(aLStack272,aLStack224);
  lib::L2CValue::operator=(aLStack256,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar5 = lib::L2CValue::operator<(aLStack96,aLStack256);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::operator/(aLStack272,aLStack256);
    lib::L2CValue::operator=(aLStack256,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator/(aLStack96,aLStack256);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::operator=(aLStack288,aLStack432);
    lib::L2CValue::~L2CValue(aLStack432);
    fVar9 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar8);
    lib::L2CValue::L2CValue(aLStack448,fVar9);
    lib::L2CValue::L2CValue(aLStack96,6.0);
    lib::L2CValue::operator*(aLStack96,aLStack448);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::operator=(aLStack208,aLStack432);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack448);
    lib::L2CValue::operator-(aLStack208,aLStack336);
    lib::L2CValue::operator*(aLStack448,aLStack288);
    lib::L2CValue::operator+(aLStack432,aLStack336);
    lib::L2CValue::operator=(aLStack192,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack448);
  }
  lib::L2CValue::L2CValue(aLStack432,_FIGHTER_WIIFIT_INSTANCE_WORK_ID_INT_SPECIAL_LW_EFFECT_RING_ID)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack432);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::operator=(aLStack240,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::L2CValue(aLStack96,_EFFECT_HANDLE_NULL);
  uVar5 = lib::L2CValue::operator==(aLStack240,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,MA_MSC_EFFECT_SET_SCALE);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
    app::sv_module_access::effect(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::~L2CValue(aLStack752);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,120.0);
  lib::L2CValue::operator=(aLStack352,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,470.0);
  lib::L2CValue::operator=(aLStack320,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,-3000.0);
  lib::L2CValue::operator=(aLStack400,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0xe);
  uVar5 = lib::L2CValue::operator<=(aLStack352,pLVar4);
  if ((uVar5 & 1) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0xe);
    lib::L2CValue::operator=(aLStack176,pLVar4);
    uVar5 = lib::L2CValue::operator<(aLStack320,aLStack176);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::operator=(aLStack176,aLStack320);
    }
    lib::L2CValue::operator-(aLStack176,aLStack352);
    lib::L2CValue::operator-(aLStack320,aLStack352);
    lib::L2CValue::operator/(aLStack448,aLStack464);
    lib::L2CValue::operator*(aLStack400,aLStack432);
    lib::L2CValue::operator=(aLStack160,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue(aLStack448);
    fVar9 = (float)lib::L2CValue::as_number(aLStack160);
    app::lua_bind::SoundModule__set_se_pitch_status_impl(*ppBVar8,fVar9);
  }
  FUN_7100013a90(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100013410:
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

