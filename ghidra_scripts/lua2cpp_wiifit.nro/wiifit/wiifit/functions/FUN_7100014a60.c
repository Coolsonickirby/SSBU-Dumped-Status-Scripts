
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100014a60(L2CFighterWiifit *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  ulong *puVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  uint uVar11;
  long lVar12;
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
  ulong auStack256 [2];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  ulong local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue(aLStack304,0);
  lib::L2CValue::L2CValue(aLStack320,0);
  lib::L2CValue::L2CValue(aLStack336,0);
  lib::L2CValue::L2CValue(aLStack352,0);
  lib::L2CValue::L2CValue(aLStack368,0);
  lib::L2CValue::L2CValue(aLStack384,0);
  lib::L2CValue::L2CValue(aLStack400,0);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100016134;
  }
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue(aLStack128,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack144,0x1300678b66);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  uVar6 = lib::L2CValue::as_integer(aLStack144);
  ppBVar9 = &this->moduleAccessor;
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
  uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_70,pLVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack416,_FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_HI_END);
    lib::L2CValue::L2CValue(aLStack432,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100016134;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
  lib::L2CValue::operator=(aLStack400,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_WIIFIT_STATUS_SPECIAL_HI_FLAG_JUMP_RESTART);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((bVar1 & 1U) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0xe);
    lib::L2CValue::L2CValue
              (aLStack144,_FIGHTER_WIIFIT_STATUS_SPECIAL_HI_WORK_FLOAT_JUMP_RESTART_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack128,fVar10);
    lib::L2CValue::operator-(pLVar4,aLStack128);
    lib::L2CValue::operator=(aLStack336,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack128,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack144,0x27d0a62189);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
    uVar5 = lib::L2CValue::operator<=(aLStack336,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
      lib::L2CValue::operator=(aLStack400,(L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    }
  }
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack400);
  if ((bVar1 & 1U) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0xe);
    lib::L2CValue::L2CValue(aLStack128,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack144,0x216daead31);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
    uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_70,pLVar4);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lVar12 = -0x80;
LAB_7100015500:
      lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar12));
      lib::L2CValue::~L2CValue(aLStack128);
    }
    else {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0xe);
      lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack192,0x1fac84d1d1);
      uVar5 = lib::L2CValue::as_integer(aLStack176);
      uVar6 = lib::L2CValue::as_integer(aLStack192);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack160,iVar3);
      uVar5 = lib::L2CValue::operator<=(pLVar4,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,CONTROL_PAD_BUTTON_SPECIAL);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack128,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          fVar10 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar9,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar10);
          lib::L2CValue::operator=(aLStack384,(L2CValue *)&local_70);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack160,0x21d2f73555);
          uVar5 = lib::L2CValue::as_integer(aLStack144);
          uVar6 = lib::L2CValue::as_integer(aLStack160);
          fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
          lib::L2CValue::L2CValue(aLStack128,fVar10);
          lib::L2CValue::operator+(aLStack384,aLStack128);
          lib::L2CValue::operator=(aLStack384,(L2CValue *)&local_70);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::L2CValue(aLStack128,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack144,0x192eb9ae9e);
          uVar5 = lib::L2CValue::as_integer(aLStack128);
          uVar6 = lib::L2CValue::as_integer(aLStack144);
          fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar10);
          lib::L2CValue::operator=(aLStack304,(L2CValue *)&local_70);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          uVar5 = lib::L2CValue::operator<(aLStack304,aLStack384);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::operator=(aLStack384,aLStack304);
          }
          lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack384);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
          lib::L2CValue::operator+(aLStack384,(L2CValue *)&local_70);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_70,
                     _FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_JUMP_SPEED_Y);
          fVar10 = (float)lib::L2CValue::as_number(aLStack128);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_WIIFIT_STATUS_SPECIAL_HI_WORK_FLOAT_JUMP_MOTION_RATE_NOW);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar10);
          lib::L2CValue::operator=(aLStack320,(L2CValue *)&local_70);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack160,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack176,0x25772e0fd3);
          uVar5 = lib::L2CValue::as_integer(aLStack160);
          uVar6 = lib::L2CValue::as_integer(aLStack176);
          fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
          lib::L2CValue::L2CValue(aLStack144,fVar10);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,100);
          lib::L2CValue::operator/(aLStack144,(L2CValue *)&local_70);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::operator=(aLStack352,aLStack128);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::operator+(aLStack320,aLStack352);
          lib::L2CValue::operator=(aLStack320,(L2CValue *)&local_70);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          fVar10 = (float)lib::L2CValue::as_number(aLStack320);
          app::lua_bind::MotionModule__set_rate_impl(*ppBVar9,fVar10);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
          lib::L2CValue::operator+(aLStack320,(L2CValue *)&local_70);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_70,
                     _FIGHTER_WIIFIT_STATUS_SPECIAL_HI_WORK_FLOAT_JUMP_MOTION_RATE_NOW);
          fVar10 = (float)lib::L2CValue::as_number(aLStack128);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_WIIFIT_STATUS_SPECIAL_HI_WORK_FLOAT_SE_PITCH);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar10);
          lib::L2CValue::operator=(aLStack368,(L2CValue *)&local_70);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0x15a0218e0b);
          HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_70);
          app::lua_bind::SoundModule__stop_se_impl(*ppBVar9,HVar7,0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0x15a0218e0b);
          HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_70);
          iVar3 = app::lua_bind::SoundModule__play_status_se_impl(*ppBVar9,HVar7,false,false,false);
          lib::L2CValue::L2CValue(aLStack448,iVar3);
          lib::L2CValue::~L2CValue(aLStack448);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          fVar10 = (float)lib::L2CValue::as_number(aLStack368);
          app::lua_bind::SoundModule__set_se_pitch_status_impl(*ppBVar9,fVar10);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,300.0);
          lib::L2CValue::operator+(aLStack368,(L2CValue *)&local_70);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::operator=(aLStack368,aLStack128);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
          lib::L2CValue::operator+(aLStack368,(L2CValue *)&local_70);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_70,_FIGHTER_WIIFIT_STATUS_SPECIAL_HI_WORK_FLOAT_SE_PITCH);
          fVar10 = (float)lib::L2CValue::as_number(aLStack128);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_70,_FIGHTER_WIIFIT_STATUS_SPECIAL_HI_FLAG_JUMP_RESTART);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_70,_FIGHTER_WIIFIT_STATUS_SPECIAL_HI_FLAG_JUMP_RESTART_NOW);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0xe);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
          lib::L2CValue::operator+(pLVar4,(L2CValue *)&local_70);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_70,
                     _FIGHTER_WIIFIT_STATUS_SPECIAL_HI_WORK_FLOAT_JUMP_RESTART_FRAME);
          fVar10 = (float)lib::L2CValue::as_number(aLStack128);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
          lVar12 = -0x60;
          goto LAB_7100015500;
        }
      }
    }
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue
            (aLStack144,_FIGHTER_WIIFIT_STATUS_SPECIAL_HI_WORK_FLOAT_JUMP_RESTART_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar10);
  lib::L2CValue::operator-(pLVar4,aLStack128);
  lib::L2CValue::operator=(aLStack336,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_WIIFIT_STATUS_SPECIAL_HI_FLAG_JUMP_RESTART_NOW);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack256,0);
    lib::L2CValue::L2CValue(aLStack272,0);
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_JUMP_SPEED_Y);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar10);
    lib::L2CValue::operator=(aLStack272,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack160,0x1d57d7b043);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack128,fVar10);
    lib::L2CValue::operator-(aLStack272,aLStack128);
    lib::L2CValue::operator=(aLStack272,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack128,0);
    lib::L2CValue::L2CValue(aLStack144,0);
    lib::L2CValue::L2CValue(aLStack160,0);
    lib::L2CValue::L2CValue(aLStack176,0);
    lib::L2CValue::L2CValue(aLStack288,0);
    lib::L2CValue::L2CValue(aLStack192,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack208,0x15c8b60fdd);
    uVar5 = lib::L2CValue::as_integer(aLStack192);
    uVar6 = lib::L2CValue::as_integer(aLStack208);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar10);
    lib::L2CValue::operator=(aLStack288,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue
              (aLStack192,_FIGHTER_WIIFIT_STATUS_SPECIAL_HI_WORK_FLOAT_JUMP_INIT_SPEED_X);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar10);
    lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack208,0x24134eff5e);
    uVar5 = lib::L2CValue::as_integer(aLStack192);
    uVar6 = lib::L2CValue::as_integer(aLStack208);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar10);
    lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack224,0x1f1e87394e);
    uVar5 = lib::L2CValue::as_integer(aLStack208);
    uVar6 = lib::L2CValue::as_integer(aLStack224);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack192,fVar10);
    lib::L2CValue::operator/(aLStack176,aLStack192);
    lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,1.0);
    pLVar4 = aLStack128;
    lib::L2CValue::operator-((L2CValue *)&local_70,pLVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack144,pLVar4);
    lib::L2CValue::operator*(aLStack224,aLStack240);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,1.0);
    lib::L2CValue::operator-((L2CValue *)&local_70,aLStack208);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::operator=(aLStack160,aLStack192);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::operator*(aLStack288,aLStack160);
    lib::L2CValue::operator=(aLStack288,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::operator=((L2CValue *)auStack256,aLStack288);
    lib::L2CValue::~L2CValue(aLStack288);
    uVar5 = lib::L2CValue::operator<(aLStack272,(L2CValue *)auStack256);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::operator=(aLStack272,(L2CValue *)auStack256);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::operator+(aLStack272,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_JUMP_SPEED_Y)
    ;
    fVar10 = (float)lib::L2CValue::as_number(aLStack128);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack272);
    puVar8 = auStack256;
LAB_7100015be8:
    lib::L2CValue::~L2CValue((L2CValue *)puVar8);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack144,0x2b38698fd9);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
    uVar5 = lib::L2CValue::operator<((L2CValue *)&local_70,aLStack336);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,1.0);
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
      app::lua_bind::MotionModule__set_rate_impl(*ppBVar9,fVar10);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,1.0);
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_WIIFIT_STATUS_SPECIAL_HI_WORK_FLOAT_JUMP_MOTION_RATE_NOW);
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_FIGHTER_WIIFIT_STATUS_SPECIAL_HI_FLAG_JUMP_RESTART_NOW);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_WIIFIT_STATUS_SPECIAL_HI_WORK_FLOAT_SE_PITCH);
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
      lib::L2CValue::~L2CValue(aLStack128);
      puVar8 = &local_70;
      goto LAB_7100015be8;
    }
  }
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_WIIFIT_STATUS_SPECIAL_HI_WORK_FLOAT_JUMP_INIT_SPEED_X)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar10);
  lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack208);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x1a);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  uVar5 = lib::L2CValue::operator==(pLVar4,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x1a);
    lib::L2CValue::L2CValue(aLStack224,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack240,0x206d62aa15);
    uVar5 = lib::L2CValue::as_integer(aLStack224);
    uVar6 = lib::L2CValue::as_integer(aLStack240);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack208,fVar10);
    lib::L2CValue::operator*(pLVar4,aLStack208);
    lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::operator+(aLStack144,aLStack160);
    lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack224,0x1f1e87394e);
    uVar5 = lib::L2CValue::as_integer(aLStack208);
    uVar6 = lib::L2CValue::as_integer(aLStack224);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar10);
    puVar8 = &local_70;
    lib::L2CValue::operator=(aLStack192,(L2CValue *)puVar8);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack144,(L2CValue *)puVar8);
    uVar5 = lib::L2CValue::operator<(aLStack192,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      uVar5 = lib::L2CValue::operator<((L2CValue *)&local_70,aLStack144);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::operator-(aLStack192);
        lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_70);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      }
      else {
        lib::L2CValue::operator=(aLStack144,aLStack192);
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::operator+(aLStack144,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_WIIFIT_STATUS_SPECIAL_HI_WORK_FLOAT_JUMP_INIT_SPEED_X)
    ;
    fVar10 = (float)lib::L2CValue::as_number(aLStack208);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack208);
  }
  fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar10);
  lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack240,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)auStack256,0x26a5e295d7);
  uVar5 = lib::L2CValue::as_integer(aLStack240);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack256);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack224,fVar10);
  lib::L2CValue::operator*(aLStack224,aLStack144);
  lib::L2CValue::operator*(aLStack208,aLStack128);
  lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue((L2CValue *)auStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack208,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  HVar7 = lib::L2CValue::as_hash(aLStack208);
  uVar5 = lib::L2CValue::as_number(aLStack176);
  lVar12 = lib::L2CValue::as_number(aLStack224);
  uVar11 = lib::L2CValue::as_number(aLStack240);
  local_70 = uVar5 & 0xffffffff | lVar12 << 0x20;
  uStack104 = (ulong)uVar11;
  app::lua_bind::ModelModule__set_joint_rotate_impl(*ppBVar9,HVar7,(Vector3f *)&local_70,0,0);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  lib::L2CValue::operator+(aLStack176,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_JUMP_ROTATION);
  fVar10 = (float)lib::L2CValue::as_number(aLStack208);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100016134:
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  return;
}

