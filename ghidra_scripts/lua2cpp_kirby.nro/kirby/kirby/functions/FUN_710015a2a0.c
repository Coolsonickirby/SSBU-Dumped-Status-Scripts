
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710015a2a0(L2CValue *param_1,L2CFighterCommon *param_2,L2CValue *param_3,L2CValue *param_4)

{
  L2CValue *this;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CAgent *pLVar7;
  code *pcVar8;
  L2CValue *pLVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
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
  
  lib::L2CValue::L2CValue(aLStack112,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack144,0x1247017fa6);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  uVar6 = lib::L2CValue::as_integer(aLStack144);
  ppBVar10 = &param_2->moduleAccessor;
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack128,fVar11);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack160,0x12cebfbd7f);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  uVar6 = lib::L2CValue::as_integer(aLStack160);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack144,fVar11);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack176,0x11ee4f2af4);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  uVar6 = lib::L2CValue::as_integer(aLStack176);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack160,fVar11);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack112);
  this = &param_2->globalTable;
  pLVar9 = (L2CValue *)0x1a;
  pLVar7 = (L2CAgent *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
  lib::L2CAgent::math_abs(pLVar7,pLVar9);
  uVar5 = lib::L2CValue::operator<=(aLStack160,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1b);
    uVar5 = lib::L2CValue::operator<=(aLStack128,pLVar9);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,2);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_STICK_DIR);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_STICK_FRAME);
      iVar3 = lib::L2CValue::as_integer(param_4);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1b);
    uVar5 = lib::L2CValue::operator<=(pLVar9,aLStack144);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,3);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_STICK_DIR);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_STICK_FRAME);
      iVar3 = lib::L2CValue::as_integer(param_4);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
      goto LAB_710015a710;
    }
  }
  else {
    pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack192,fVar11);
    lib::L2CValue::operator*(pLVar9,aLStack192);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar5 = lib::L2CValue::operator<(aLStack112,aLStack176);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,1);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_STICK_DIR);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_STICK_FRAME);
      iVar3 = lib::L2CValue::as_integer(param_4);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_STICK_DIR);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_STICK_FRAME);
      iVar3 = lib::L2CValue::as_integer(param_4);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
    }
LAB_710015a710:
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack192,_CONTROL_PAD_BUTTON_GUARD);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  bVar1 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack192);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_BUTTON_RAPID);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_BARRAGE_TRIGGER);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_NEXT_STATUS);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_BARRAGE_BUTTON_ON);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_BUTTON_RAPID);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    if ((uVar5 & 1) != 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator==(pLVar9,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack192,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_UNABLE_JUMP);
        iVar3 = lib::L2CValue::as_integer(aLStack192);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack112,false);
        uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack192);
        }
        else {
          lib::L2CValue::L2CValue(aLStack224,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_UNABLE_SPECIAL_N);
          iVar3 = lib::L2CValue::as_integer(aLStack224);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack112,false);
          uVar5 = lib::L2CValue::operator==(aLStack208,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack192);
          if ((uVar5 & 1) != 0) {
            lua2cpp::L2CFighterCommon::sub_check_button_jump(param_2);
            lib::L2CValue::L2CValue(aLStack112,true);
            uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((uVar5 & 1) == 0) {
              lua2cpp::L2CFighterCommon::sub_check_button_frick(param_2);
              lib::L2CValue::L2CValue(aLStack112,true);
              uVar5 = lib::L2CValue::operator==(aLStack192,aLStack112);
              lib::L2CValue::~L2CValue(aLStack112);
              lib::L2CValue::~L2CValue(aLStack192);
              lib::L2CValue::~L2CValue(aLStack176);
              if ((uVar5 & 1) == 0) goto LAB_710015a9f4;
            }
            else {
              lib::L2CValue::~L2CValue(aLStack176);
            }
            lib::L2CValue::L2CValue(aLStack240,_FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N_JUMP);
            lib::L2CValue::L2CValue(aLStack256,true);
            lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x10,(L2CValue)0x0);
            lib::L2CValue::~L2CValue(aLStack256);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::L2CValue(param_1,true);
            goto LAB_710015bae8;
          }
        }
      }
    }
LAB_710015a9f4:
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_BARRAGE_TRIGGER);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    if ((uVar5 & 1) != 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator==(pLVar9,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack192,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_UNABLE_SPECIAL_N);
        iVar3 = lib::L2CValue::as_integer(aLStack192);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack112,false);
        uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack192);
        if ((uVar5 & 1) != 0) {
          pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x20);
          lib::L2CValue::L2CValue
                    (aLStack112,
                     _FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_HI | _FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_LW);
          lib::L2CValue::operator&(pLVar9,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack176);
          lib::L2CValue::~L2CValue(aLStack176);
          if ((bVar2 & 1U) != 0) {
            pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x20);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_LW);
            lib::L2CValue::operator&(pLVar9,aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack176);
            lib::L2CValue::~L2CValue(aLStack176);
            if ((bVar2 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_BARRAGE_LW);
              iVar3 = lib::L2CValue::as_integer(aLStack112);
              app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
              lib::L2CValue::~L2CValue(aLStack112);
            }
            lib::L2CValue::L2CValue
                      (aLStack272,_FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N_BARRAGE_START);
            lib::L2CValue::L2CValue(aLStack288,true);
            lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xf0,(L2CValue)0xe0);
            lib::L2CValue::~L2CValue(aLStack288);
            lib::L2CValue::~L2CValue(aLStack272);
            lib::L2CValue::L2CValue(param_1,true);
            goto LAB_710015bae8;
          }
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_BUTTON_RAPID);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    if ((uVar5 & 1) != 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N_ESCAPE);
      uVar5 = lib::L2CValue::operator==(pLVar9,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_ESCAPE);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        lib::L2CValue::L2CValue(aLStack208,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack224,0xe6c4b2389);
        uVar5 = lib::L2CValue::as_integer(aLStack208);
        uVar6 = lib::L2CValue::as_integer(aLStack224);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack192,iVar3);
        uVar5 = lib::L2CValue::operator<(aLStack112,aLStack192);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack176);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack192,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_UNABLE_SPECIAL_N);
          iVar3 = lib::L2CValue::as_integer(aLStack192);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack112,false);
          uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack192);
          if ((uVar5 & 1) != 0) {
            pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x20);
            lib::L2CValue::L2CValue(aLStack112,FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_S);
            lib::L2CValue::operator&(pLVar9,aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack176);
            lib::L2CValue::~L2CValue(aLStack176);
            if ((bVar2 & 1U) != 0) {
              fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
              lib::L2CValue::L2CValue(aLStack176,fVar11);
              lib::L2CValue::L2CValue(aLStack112,1.0);
              uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
              lib::L2CValue::~L2CValue(aLStack112);
              lib::L2CValue::~L2CValue(aLStack176);
              if ((uVar5 & 1) == 0) {
                iVar3 = app::lua_bind::ControlModule__special_s_turn_impl(*ppBVar10);
                lib::L2CValue::L2CValue(aLStack176,iVar3);
                lib::L2CValue::L2CValue(aLStack112,_FIGHTER_COMMAND_TURN_LR_LEFT);
                uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
                lib::L2CValue::~L2CValue(aLStack112);
                lib::L2CValue::~L2CValue(aLStack176);
                if ((uVar5 & 1) != 0) {
                  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_ESCAPE_F);
                  iVar3 = lib::L2CValue::as_integer(aLStack112);
                  app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
                  goto LAB_710015b730;
                }
              }
              else {
                iVar3 = app::lua_bind::ControlModule__special_s_turn_impl(*ppBVar10);
                lib::L2CValue::L2CValue(aLStack176,iVar3);
                lib::L2CValue::L2CValue(aLStack112,_FIGHTER_COMMAND_TURN_LR_RIGHT);
                uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
                lib::L2CValue::~L2CValue(aLStack112);
                lib::L2CValue::~L2CValue(aLStack176);
                if ((uVar5 & 1) != 0) {
                  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_ESCAPE_F);
                  iVar3 = lib::L2CValue::as_integer(aLStack112);
                  app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
LAB_710015b730:
                  lib::L2CValue::~L2CValue(aLStack112);
                }
              }
              lib::L2CValue::L2CValue(aLStack304,_FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N_ESCAPE);
              lib::L2CValue::L2CValue(aLStack320,true);
              lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xd0,(L2CValue)0xc0);
              lib::L2CValue::~L2CValue(aLStack320);
              lib::L2CValue::~L2CValue(aLStack304);
              lib::L2CValue::L2CValue(param_1,true);
              goto LAB_710015bae8;
            }
            lib::L2CValue::L2CValue
                      (aLStack176,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_BUTTON_RAPID_COUNT);
            iVar3 = lib::L2CValue::as_integer(aLStack176);
            iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
            lib::L2CValue::L2CValue(aLStack112,iVar3);
            lib::L2CValue::L2CValue(aLStack208,0xf899192aa);
            lib::L2CValue::L2CValue(aLStack224,0xb0d312c7e);
            uVar5 = lib::L2CValue::as_integer(aLStack208);
            uVar6 = lib::L2CValue::as_integer(aLStack224);
            iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar5,uVar6);
            lib::L2CValue::L2CValue(aLStack192,iVar3);
            uVar5 = lib::L2CValue::operator<=(aLStack192,aLStack112);
            lib::L2CValue::~L2CValue(aLStack192);
            lib::L2CValue::~L2CValue(aLStack224);
            lib::L2CValue::~L2CValue(aLStack208);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack176);
            if ((uVar5 & 1) != 0) {
              pLVar9 = (L2CValue *)0x1a;
              pLVar7 = (L2CAgent *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
              lib::L2CAgent::math_abs(pLVar7,pLVar9);
              uVar5 = lib::L2CValue::operator<=(aLStack160,aLStack112);
              lib::L2CValue::~L2CValue(aLStack112);
              if ((uVar5 & 1) != 0) {
                pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
                fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
                lib::L2CValue::L2CValue(aLStack192,fVar11);
                lib::L2CValue::operator*(pLVar9,aLStack192);
                lib::L2CValue::L2CValue(aLStack112,0.0);
                uVar5 = lib::L2CValue::operator<(aLStack112,aLStack176);
                lib::L2CValue::~L2CValue(aLStack112);
                lib::L2CValue::~L2CValue(aLStack176);
                lib::L2CValue::~L2CValue(aLStack192);
                if ((uVar5 & 1) != 0) {
                  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_ESCAPE_F);
                  iVar3 = lib::L2CValue::as_integer(aLStack112);
                  app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
                  lib::L2CValue::~L2CValue(aLStack112);
                }
                lib::L2CValue::L2CValue(aLStack336,_FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N_ESCAPE)
                ;
                lib::L2CValue::L2CValue(aLStack352,true);
                lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xb0,(L2CValue)0xa0);
                lib::L2CValue::~L2CValue(aLStack352);
                lib::L2CValue::~L2CValue(aLStack336);
                lib::L2CValue::L2CValue(param_1,true);
                goto LAB_710015bae8;
              }
            }
          }
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_BARRAGE_BUTTON_ON);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    if ((uVar5 & 1) != 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N_ESCAPE);
      uVar5 = lib::L2CValue::operator==(pLVar9,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator==(pLVar9,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack192,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_UNABLE_JUMP);
          iVar3 = lib::L2CValue::as_integer(aLStack192);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack112,false);
          uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::~L2CValue(aLStack176);
            lib::L2CValue::~L2CValue(aLStack192);
          }
          else {
            lib::L2CValue::L2CValue(aLStack224,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_UNABLE_SPECIAL_N)
            ;
            iVar3 = lib::L2CValue::as_integer(aLStack224);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
            lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
            lib::L2CValue::L2CValue(aLStack112,false);
            uVar5 = lib::L2CValue::operator==(aLStack208,aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack208);
            lib::L2CValue::~L2CValue(aLStack224);
            lib::L2CValue::~L2CValue(aLStack176);
            lib::L2CValue::~L2CValue(aLStack192);
            if ((uVar5 & 1) != 0) {
              lua2cpp::L2CFighterCommon::sub_check_button_jump(param_2);
              lib::L2CValue::L2CValue(aLStack112,true);
              uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
              lib::L2CValue::~L2CValue(aLStack112);
              if ((uVar5 & 1) == 0) {
                lua2cpp::L2CFighterCommon::sub_check_button_frick(param_2);
                lib::L2CValue::L2CValue(aLStack112,true);
                uVar5 = lib::L2CValue::operator==(aLStack192,aLStack112);
                lib::L2CValue::~L2CValue(aLStack112);
                lib::L2CValue::~L2CValue(aLStack192);
                lib::L2CValue::~L2CValue(aLStack176);
                if ((uVar5 & 1) == 0) goto LAB_710015b32c;
              }
              else {
                lib::L2CValue::~L2CValue(aLStack176);
              }
              lib::L2CValue::L2CValue(aLStack368,_FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N_JUMP);
              lib::L2CValue::L2CValue(aLStack384,true);
              lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x90,(L2CValue)0x80);
              lib::L2CValue::~L2CValue(aLStack384);
              lib::L2CValue::~L2CValue(aLStack368);
              lib::L2CValue::L2CValue(param_1,true);
              goto LAB_710015bae8;
            }
          }
        }
      }
    }
LAB_710015b32c:
    lib::L2CValue::L2CValue(aLStack176,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack208,_CONTROL_PAD_BUTTON_SPECIAL_RAW);
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      bVar1 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack192);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack176);
      if ((bVar2 & 1U) == 0) goto LAB_710015badc;
    }
    else {
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack176);
    }
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_UNABLE_SPECIAL_N);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack192,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_BARRAGE_BUTTON_ON);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack112,true);
      uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack192);
      if ((uVar5 & 1) != 0) {
        pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N_ESCAPE);
        uVar5 = lib::L2CValue::operator==(pLVar9,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
LAB_710015b814:
          pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
          lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator==(pLVar9,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack192,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_STICK_DIR);
            iVar3 = lib::L2CValue::as_integer(aLStack192);
            iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
            lib::L2CValue::L2CValue(aLStack176,iVar3);
            lib::L2CValue::L2CValue(aLStack112,2);
            uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack176);
            lib::L2CValue::~L2CValue(aLStack192);
            if ((uVar5 & 1) != 0) {
              lib::L2CValue::L2CValue
                        (aLStack432,_FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N_BARRAGE_START);
              lib::L2CValue::L2CValue(aLStack448,true);
              lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x50,(L2CValue)0x40);
              lib::L2CValue::~L2CValue(aLStack448);
              lib::L2CValue::~L2CValue(aLStack432);
              lib::L2CValue::L2CValue(param_1,true);
              goto LAB_710015bae8;
            }
            lib::L2CValue::L2CValue(aLStack192,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_STICK_DIR);
            iVar3 = lib::L2CValue::as_integer(aLStack192);
            iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
            lib::L2CValue::L2CValue(aLStack176,iVar3);
            lib::L2CValue::L2CValue(aLStack112,3);
            uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack176);
            lib::L2CValue::~L2CValue(aLStack192);
            if ((uVar5 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_BARRAGE_LW);
              iVar3 = lib::L2CValue::as_integer(aLStack112);
              app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
              lib::L2CValue::~L2CValue(aLStack112);
              lib::L2CValue::L2CValue
                        (aLStack464,_FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N_BARRAGE_START);
              lib::L2CValue::L2CValue(aLStack480,true);
              lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x30,(L2CValue)0x20);
              lib::L2CValue::~L2CValue(aLStack480);
              lib::L2CValue::~L2CValue(aLStack464);
              lib::L2CValue::L2CValue(param_1,true);
              goto LAB_710015bae8;
            }
          }
          goto LAB_710015b84c;
        }
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_ESCAPE);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        lib::L2CValue::L2CValue(aLStack208,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack224,0xe6c4b2389);
        uVar5 = lib::L2CValue::as_integer(aLStack208);
        uVar6 = lib::L2CValue::as_integer(aLStack224);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack192,iVar3);
        uVar5 = lib::L2CValue::operator<(aLStack112,aLStack192);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack176);
        if ((uVar5 & 1) == 0) goto LAB_710015b814;
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_STICK_DIR);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack176,iVar3);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0);
        uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,1);
          uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::~L2CValue(aLStack176);
            goto LAB_710015b814;
          }
        }
        lib::L2CValue::L2CValue(aLStack112,0);
        uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_ESCAPE_F);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::~L2CValue(aLStack112);
        }
        lib::L2CValue::L2CValue(aLStack400,_FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N_ESCAPE);
        lib::L2CValue::L2CValue(aLStack416,true);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x70,(L2CValue)0x60);
        lib::L2CValue::~L2CValue(aLStack416);
        lib::L2CValue::~L2CValue(aLStack400);
        lib::L2CValue::L2CValue(param_1,true);
LAB_710015bad0:
        lib::L2CValue::~L2CValue(aLStack176);
        goto LAB_710015bae8;
      }
LAB_710015b84c:
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_NEXT_STATUS);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack112,true);
      uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack192);
      if ((uVar5 & 1) != 0) {
        pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N_ESCAPE);
        uVar5 = lib::L2CValue::operator==(pLVar9,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack176,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_ESCAPE);
          iVar3 = lib::L2CValue::as_integer(aLStack176);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack112,iVar3);
          lib::L2CValue::L2CValue(aLStack208,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack224,0xe6c4b2389);
          uVar5 = lib::L2CValue::as_integer(aLStack208);
          uVar6 = lib::L2CValue::as_integer(aLStack224);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar5,uVar6);
          lib::L2CValue::L2CValue(aLStack192,iVar3);
          uVar5 = lib::L2CValue::operator<(aLStack112,aLStack192);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack176);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_STICK_DIR);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
            lib::L2CValue::L2CValue(aLStack176,iVar3);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,0);
            uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack112,1);
              uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
              lib::L2CValue::~L2CValue(aLStack112);
              if ((uVar5 & 1) == 0) {
                lib::L2CValue::~L2CValue(aLStack176);
                goto LAB_710015bcb4;
              }
            }
            lib::L2CValue::L2CValue(aLStack112,0);
            uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((uVar5 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_ESCAPE_F);
              iVar3 = lib::L2CValue::as_integer(aLStack112);
              app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
              lib::L2CValue::~L2CValue(aLStack112);
            }
            lib::L2CValue::L2CValue(aLStack496,_FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N_ESCAPE);
            lib::L2CValue::L2CValue(aLStack512,true);
            lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x10,(L2CValue)0x0);
            lib::L2CValue::~L2CValue(aLStack512);
            lib::L2CValue::~L2CValue(aLStack496);
            lib::L2CValue::L2CValue(param_1,true);
            goto LAB_710015bad0;
          }
        }
LAB_710015bcb4:
        pcVar8 = (code *)lib::L2CValue::as_pointer(param_3);
        (*pcVar8)(param_2);
        lib::L2CValue::~L2CValue(aLStack528);
        lib::L2CValue::L2CValue(param_1,true);
        goto LAB_710015bae8;
      }
    }
  }
LAB_710015badc:
  lib::L2CValue::L2CValue(param_1,false);
LAB_710015bae8:
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

