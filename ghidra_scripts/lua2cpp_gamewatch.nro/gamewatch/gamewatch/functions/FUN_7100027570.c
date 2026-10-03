
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100027570(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CAgent *this;
  ulong uVar6;
  L2CValue *pLVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
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
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) goto LAB_7100027d08;
  pLVar7 = (L2CValue *)((long)param_2 + 200);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar7,9);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_KIND_SPECIAL_LW_END);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_WORK_FLOAT_TURN_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    ppBVar8 = (BattleObjectModuleAccessor **)((long)param_2 + 0x40);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack112,fVar9);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar5 = lib::L2CValue::operator<(aLStack96,aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)0x1a;
      this = (L2CAgent *)lib::L2CValue::operator[](pLVar7,0x1a);
      lib::L2CAgent::math_abs(this,pLVar4);
      lib::L2CValue::L2CValue(aLStack128,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack144,0xcee0a3848);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack112,fVar9);
      uVar5 = lib::L2CValue::operator<=(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) goto LAB_710002776c;
      bVar2 = app::lua_bind::PostureModule__set_stick_lr_impl(*ppBVar8,0.0);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
      pLVar4 = aLStack160;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,-1.0);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_WORK_FLOAT_TURN_FRAME)
      ;
      fVar9 = (float)lib::L2CValue::as_number(aLStack96);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__add_float_impl(*ppBVar8,fVar9,iVar3);
      lib::L2CValue::~L2CValue(aLStack112);
      pLVar4 = aLStack96;
    }
    lib::L2CValue::~L2CValue(pLVar4);
  }
LAB_710002776c:
  ppBVar8 = (BattleObjectModuleAccessor **)((long)param_2 + 0x40);
  fVar9 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_WORK_FLOAT_LR);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack112,fVar9);
    lib::L2CValue::L2CValue(aLStack96,1.0);
    uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar8);
      lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack176,0xa1de21ba9);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      uVar6 = lib::L2CValue::as_integer(aLStack176);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack128,fVar9);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator+(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_WORK_FLOAT_TURN_FRAME);
      fVar9 = (float)lib::L2CValue::as_number(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack96,-1.0);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_WORK_FLOAT_LR);
      fVar9 = (float)lib::L2CValue::as_number(aLStack96);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar3);
      goto LAB_7100027aac;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_WORK_FLOAT_LR);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack112,fVar9);
    lib::L2CValue::L2CValue(aLStack96,-1.0);
    uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar8);
      lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack176,0xa1de21ba9);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      uVar6 = lib::L2CValue::as_integer(aLStack176);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack128,fVar9);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator+(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_WORK_FLOAT_TURN_FRAME);
      fVar9 = (float)lib::L2CValue::as_number(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack96,1.0);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_WORK_FLOAT_LR);
      fVar9 = (float)lib::L2CValue::as_number(aLStack96);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar3);
LAB_7100027aac:
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue(aLStack112,CONTROL_PAD_BUTTON_SPECIAL);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar2 = app::lua_bind::ControlModule__check_button_off_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_BUTTON_RELEASE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_LOOP);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar1 & 1U) == 0) goto LAB_7100027d08;
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_BUTTON_RELEASE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar1 & 1U) == 0) goto LAB_7100027d08;
  lib::L2CValue::L2CValue(aLStack112,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack128,0xfe59ae799);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  uVar6 = lib::L2CValue::as_integer(aLStack128);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,CONTROL_PAD_BUTTON_SPECIAL);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack112);
    pLVar7 = aLStack128;
LAB_7100027cfc:
    lib::L2CValue::~L2CValue(pLVar7);
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x1b);
    lib::L2CValue::operator-(aLStack96);
    uVar5 = lib::L2CValue::operator<=(pLVar7,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_KIND_SPECIAL_LW);
      lib::L2CValue::L2CValue(aLStack208,true);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x40,(L2CValue)0x30);
      lib::L2CValue::~L2CValue(aLStack208);
      pLVar7 = aLStack192;
      goto LAB_7100027cfc;
    }
  }
  lib::L2CValue::~L2CValue(aLStack96);
LAB_7100027d08:
  lib::L2CValue::L2CValue(aLStack240,param_3);
  FUN_7100028c00(aLStack224,param_2,aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

