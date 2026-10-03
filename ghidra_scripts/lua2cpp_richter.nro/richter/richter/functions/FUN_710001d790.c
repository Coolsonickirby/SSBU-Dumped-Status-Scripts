
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001d790(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  float fVar8;
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
  L2CValue aLStack80 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) goto LAB_710001e068;
  fVar8 = (float)app::lua_bind::ControlModule__get_stick_x_no_clamp_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack96,fVar8);
  fVar8 = (float)app::lua_bind::ControlModule__get_stick_y_no_clamp_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack112,fVar8);
  lib::L2CValue::L2CValue(aLStack80,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack144,0x1597058f0f);
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack128,fVar8);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SIMON_STATUS_ATTACK_HOLD_WORK_FLOAT_REACH_PREV_X);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack144,fVar8);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SIMON_STATUS_ATTACK_HOLD_WORK_FLOAT_REACH_PREV_Y);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack160,fVar8);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::operator-(aLStack96,aLStack144);
  lib::L2CValue::operator*(aLStack192,aLStack128);
  lib::L2CValue::operator+(aLStack144,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::operator-(aLStack112,aLStack160);
  lib::L2CValue::operator*(aLStack208,aLStack128);
  lib::L2CValue::operator+(aLStack160,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack80,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack224,0xfc2c74789);
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  pLVar6 = (L2CValue *)lib::L2CValue::as_integer(aLStack224);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,(ulong)pLVar6);
  lib::L2CValue::L2CValue(aLStack208,fVar8);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SIMON_STATUS_ATTACK_HOLD_WORK_FLOAT_PREV_X);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack224,fVar8);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SIMON_STATUS_ATTACK_HOLD_WORK_FLOAT_PREV_Y);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack240,fVar8);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::operator-(aLStack96,aLStack224);
  lib::L2CValue::operator*(aLStack272,aLStack208);
  lib::L2CValue::operator+(aLStack224,aLStack256);
  lib::L2CValue::operator=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::operator-(aLStack112,aLStack240);
  lib::L2CValue::operator*(aLStack272,aLStack208);
  lib::L2CValue::operator+(aLStack240,aLStack256);
  lib::L2CValue::operator=(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SIMON_INSTANCE_WORK_ID_FLOAT_WHIP_HOLD_STICK_MOVE_MUL);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack256,fVar8);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),9);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SIMON_STATUS_KIND_ATTACK_HOLD_START);
  uVar4 = lib::L2CValue::operator==(pLVar7,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    uVar3 = app::lua_bind::MotionModule__end_frame_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack272,uVar3);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar4 = lib::L2CValue::operator<(aLStack80,aLStack272);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      fVar8 = (float)app::lua_bind::MotionModule__frame_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
      lib::L2CValue::L2CValue(aLStack304,fVar8);
      uVar3 = app::lua_bind::MotionModule__end_frame_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
      lib::L2CValue::L2CValue(aLStack320,uVar3);
      lib::L2CValue::operator/(aLStack304,aLStack320);
      lib::L2CValue::operator*(aLStack256,aLStack288);
      lib::L2CValue::operator=(aLStack256,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack304);
    }
    lib::L2CValue::~L2CValue(aLStack272);
  }
  lib::L2CValue::operator*(aLStack176,aLStack256);
  lib::L2CValue::operator*(aLStack176,aLStack256);
  lib::L2CValue::operator*(aLStack304,aLStack320);
  lib::L2CValue::operator*(aLStack192,aLStack256);
  lib::L2CValue::operator*(aLStack192,aLStack256);
  lib::L2CValue::operator*(aLStack352,aLStack368);
  pLVar7 = aLStack336;
  lib::L2CValue::operator+(aLStack288,pLVar7);
  lib::L2CAgent::math_sqrt((L2CAgent *)aLStack80,pLVar7);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  uVar4 = lib::L2CValue::operator<(aLStack80,aLStack272);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::operator=(aLStack272,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,1.0);
  lib::L2CValue::operator-(aLStack80,aLStack272);
  lib::L2CValue::~L2CValue(aLStack80);
  fVar8 = (float)app::lua_bind::MotionModule__prev_weight_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,fVar8);
  lib::L2CValue::operator-(aLStack304,aLStack80);
  fVar8 = (float)lib::L2CValue::as_number(aLStack288);
  app::lua_bind::MotionModule__set_weight_rate_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar8);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack304);
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack320,fVar8);
  lib::L2CValue::operator*(aLStack96,aLStack320);
  pLVar7 = aLStack304;
  lib::L2CAgent::math_atan((L2CAgent *)aLStack112,pLVar7,pLVar6);
  lib::L2CAgent::math_deg((L2CAgent *)aLStack80,pLVar7);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack80,360.0);
  uVar4 = lib::L2CValue::operator<(aLStack80,aLStack288);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar4 = lib::L2CValue::operator<(aLStack288,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,360.0);
      lib::L2CValue::operator+(aLStack288,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::operator=(aLStack288,aLStack304);
      goto LAB_710001de44;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,360.0);
    lib::L2CValue::operator-(aLStack288,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::operator=(aLStack288,aLStack304);
LAB_710001de44:
    lib::L2CValue::~L2CValue(aLStack304);
  }
  fVar8 = (float)lib::L2CValue::as_number(aLStack288);
  app::lua_bind::MotionModule__set_frame_2nd_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar8,true);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator+(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SIMON_STATUS_ATTACK_HOLD_WORK_FLOAT_PREV_X);
  fVar8 = (float)lib::L2CValue::as_number(aLStack304);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar8,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator+(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SIMON_STATUS_ATTACK_HOLD_WORK_FLOAT_PREV_Y);
  fVar8 = (float)lib::L2CValue::as_number(aLStack304);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar8,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator+(aLStack176,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SIMON_STATUS_ATTACK_HOLD_WORK_FLOAT_REACH_PREV_X);
  fVar8 = (float)lib::L2CValue::as_number(aLStack304);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar8,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator+(aLStack192,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SIMON_STATUS_ATTACK_HOLD_WORK_FLOAT_REACH_PREV_Y);
  fVar8 = (float)lib::L2CValue::as_number(aLStack304);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar8,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
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
  lib::L2CValue::~L2CValue(aLStack96);
LAB_710001e068:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

