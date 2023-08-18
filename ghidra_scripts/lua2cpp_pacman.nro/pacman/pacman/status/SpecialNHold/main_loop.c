
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPacman::status::SpecialNHold_main_loop(L2CFighterPacman *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  ulong uVar8;
  BattleObjectModuleAccessor *pBVar9;
  BattleObjectModuleAccessor **ppBVar10;
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
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
LAB_710002f230:
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        FUN_710002df20(this);
        lib::L2CValue::L2CValue(aLStack96,0xe06860a20);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (this->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
        goto LAB_710002f2e4;
      }
    }
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) goto LAB_710002f230;
    FUN_710002d300(this);
    lib::L2CValue::L2CValue(aLStack96,0x1244d4ffef);
    HVar7 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (this->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
LAB_710002f2e4:
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack160,0xf45105dd7);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  uVar8 = lib::L2CValue::as_integer(aLStack160);
  ppBVar10 = &this->moduleAccessor;
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack176,0x1b9db69840);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  uVar8 = lib::L2CValue::as_integer(aLStack176);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack160,iVar3);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_N_CHARGE_RANK);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack176,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  uVar6 = lib::L2CValue::operator__(aLStack160,aLStack176);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack208,0x17c4e9f677);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    uVar8 = lib::L2CValue::as_integer(aLStack208);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::operator_(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_CHARGE_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  uVar6 = lib::L2CValue::operator__(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_N_CHARGE_RANK);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack192,iVar3);
    lib::L2CValue::L2CValue(aLStack96,_PACMAN_SPECIAL_N_RANK_MAX);
    uVar6 = lib::L2CValue::operator_(aLStack192,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_N_CHARGE_RANK);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__inc_int_impl(*ppBVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_N_CHARGE_RANK)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::operator_(aLStack176,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack96,_PACMAN_SPECIAL_N_RANK_MAX);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack176);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_PACMAN_SPECIAL_N_RANK_MAX);
        lib::L2CValue::L2CValue
                  (aLStack192,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_N_CHARGE_RANK);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar4 = lib::L2CValue::as_integer(aLStack192);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_PACMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_N_MAX_HAVE_ITEM);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack96,0);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_CHARGE_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = lib::L2CValue::as_integer(aLStack192);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x240e24407a);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
  lib::L2CValue::operator_(pLVar5,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack192);
  if ((bVar1 & 1U) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_FLAG_ATTACK_TRIGGER);
    lib::L2CValue::operator_(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PACMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_N_PULL_THROW)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack192,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar6 = lib::L2CValue::operator__(aLStack192,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack208);
      }
      else {
        lib::L2CValue::L2CValue(aLStack272,CONTROL_PAD_BUTTON_SPECIAL);
        iVar3 = lib::L2CValue::as_integer(aLStack272);
        bVar2 = app::lua_bind::ControlModule__check_button_off_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack208);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack288,_FIGHTER_PACMAN_STATUS_KIND_SPECIAL_N_SHOOT);
          lib::L2CValue::L2CValue(aLStack304,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_710002f7f0;
        }
      }
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_N_CHARGE_RANK)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack192,iVar3);
      lib::L2CValue::L2CValue(aLStack96,_PACMAN_SPECIAL_N_RANK_MAX);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack192);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_MAX_HOLD_COUNT)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack192);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack96,iVar3);
        lib::L2CValue::operator_(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::L2CValue(aLStack96,0);
        uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack192,_MA_MSC_EFFECT_REQUEST_FOLLOW);
          lib::L2CValue::L2CValue(aLStack208,0x10259d5bb4);
          lib::L2CValue::L2CValue(aLStack272,0x5e008fd84);
          lib::L2CValue::L2CValue(aLStack320,0.0);
          lib::L2CValue::L2CValue(aLStack336,0.0);
          lib::L2CValue::L2CValue(aLStack352,0.0);
          lib::L2CValue::L2CValue(aLStack368,0.0);
          lib::L2CValue::L2CValue(aLStack384,0.0);
          lib::L2CValue::L2CValue(aLStack400,0.0);
          lib::L2CValue::L2CValue(aLStack416,1.0);
          lib::L2CValue::L2CValue(aLStack432,true);
          lib::L2CValue::L2CValue(aLStack448,EFFECT_SUB_ATTRIBUTE_NONE);
          lib::L2CValue::L2CValue(aLStack464,0);
          lib::L2CValue::L2CValue(aLStack480,0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack384);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack400);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack416);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack432);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack448);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack464);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack480);
          app::sv_module_access::effect(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::operator_(aLStack128,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack480);
          lib::L2CValue::_L2CValue(aLStack464);
          lib::L2CValue::_L2CValue(aLStack448);
          lib::L2CValue::_L2CValue(aLStack432);
          lib::L2CValue::_L2CValue(aLStack416);
          lib::L2CValue::_L2CValue(aLStack400);
          lib::L2CValue::_L2CValue(aLStack384);
          lib::L2CValue::_L2CValue(aLStack368);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack192);
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
          pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
          app::FighterUtil::flash_eye_info(pBVar9);
        }
        lib::L2CValue::L2CValue(aLStack192,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack208,0x1008b0a33d);
        uVar6 = lib::L2CValue::as_integer(aLStack192);
        uVar8 = lib::L2CValue::as_integer(aLStack208);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar6,uVar8);
        lib::L2CValue::L2CValue(aLStack96,iVar3);
        uVar6 = lib::L2CValue::operator__(aLStack96,aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,0x22baf2b632);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack496);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack512,_FIGHTER_PACMAN_STATUS_KIND_SPECIAL_N_CANCEL);
          lib::L2CValue::L2CValue(aLStack528,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
          lib::L2CValue::_L2CValue(aLStack528);
          lib::L2CValue::_L2CValue(aLStack512);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_710002f7f0;
        }
      }
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_FLAG_GUARD_TRIGGER);
        lib::L2CValue::operator_(pLVar5,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack192);
        lib::L2CValue::_L2CValue(aLStack192);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack96,_FIGHTER_PACMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_N_PULL_THROW);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,0x22baf2b632);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack544);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_NEXT_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar4 = lib::L2CValue::as_integer(aLStack192);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack560,_FIGHTER_PACMAN_STATUS_KIND_SPECIAL_N_CANCEL);
          lib::L2CValue::L2CValue(aLStack576,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
          lib::L2CValue::_L2CValue(aLStack576);
          lib::L2CValue::_L2CValue(aLStack560);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_710002f7f0;
        }
      }
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lua2cpp::L2CFighterCommon::sub_check_jump_in_charging(this);
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar6 = lib::L2CValue::operator__(aLStack192,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack192);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_JUMP_AERIAL);
          lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_NEXT_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar4 = lib::L2CValue::as_integer(aLStack192);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue
                    (aLStack96,_FIGHTER_PACMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_N_PULL_THROW);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,0x22baf2b632);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack640);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack656,_FIGHTER_PACMAN_STATUS_KIND_SPECIAL_N_JUMP_CANCEL);
          lib::L2CValue::L2CValue(aLStack672,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x70,(L2CValue)0x60);
          lib::L2CValue::_L2CValue(aLStack672);
          lib::L2CValue::_L2CValue(aLStack656);
        }
        lib::L2CValue::L2CValue(aLStack208,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_ESCAPE_AIR);
        iVar3 = lib::L2CValue::as_integer(aLStack208);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack192,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar6 = lib::L2CValue::operator__(aLStack192,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack208);
        if ((uVar6 & 1) != 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_FLAG_GUARD_TRIGGER);
          lib::L2CValue::operator_(pLVar5,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack192);
          lib::L2CValue::_L2CValue(aLStack192);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ESCAPE_AIR);
            lib::L2CValue::L2CValue
                      (aLStack192,_FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_NEXT_STATUS);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            iVar4 = lib::L2CValue::as_integer(aLStack192);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
            lib::L2CValue::_L2CValue(aLStack192);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_PACMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_N_PULL_THROW);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,0x22baf2b632);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
            app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
            lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
            lib::L2CValue::_L2CValue(aLStack688);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack704,_FIGHTER_PACMAN_STATUS_KIND_SPECIAL_N_CANCEL);
            lib::L2CValue::L2CValue(aLStack720,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
            lib::L2CValue::_L2CValue(aLStack720);
            lib::L2CValue::_L2CValue(aLStack704);
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            goto LAB_710002f7f0;
          }
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack192,false);
        lua2cpp::L2CFighterCommon::sub_check_jump_in_charging(this);
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar6 = lib::L2CValue::operator__(aLStack208,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack208);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,true);
          lib::L2CValue::operator_(aLStack192,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
          lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_NEXT_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar4 = lib::L2CValue::as_integer(aLStack208);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE);
        lib::L2CValue::operator_(pLVar5,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack208);
        lib::L2CValue::_L2CValue(aLStack208);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,true);
          lib::L2CValue::operator_(aLStack192,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ESCAPE);
          lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_NEXT_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar4 = lib::L2CValue::as_integer(aLStack208);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_F);
        lib::L2CValue::operator_(pLVar5,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack208);
        lib::L2CValue::_L2CValue(aLStack208);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,true);
          lib::L2CValue::operator_(aLStack192,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_ESCAPE_F);
          lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_NEXT_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar4 = lib::L2CValue::as_integer(aLStack208);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_B);
        lib::L2CValue::operator_(pLVar5,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack208);
        lib::L2CValue::_L2CValue(aLStack208);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,true);
          lib::L2CValue::operator_(aLStack192,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ESCAPE_B);
          lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_NEXT_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar4 = lib::L2CValue::as_integer(aLStack208);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar6 = lib::L2CValue::operator__(aLStack192,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack96,_FIGHTER_PACMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_N_PULL_THROW);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,0x22baf2b632);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack592);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack608,_FIGHTER_PACMAN_STATUS_KIND_SPECIAL_N_CANCEL);
          lib::L2CValue::L2CValue(aLStack624,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
          lib::L2CValue::_L2CValue(aLStack624);
          lib::L2CValue::_L2CValue(aLStack608);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          lib::L2CValue::_L2CValue(aLStack192);
          goto LAB_710002f7f0;
        }
        lib::L2CValue::_L2CValue(aLStack192);
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710002f7f0;
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack192);
  }
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PACMAN_STATUS_KIND_SPECIAL_N_SHOOT);
  lib::L2CValue::L2CValue(aLStack256,true);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
LAB_710002f7f0:
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

