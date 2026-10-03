
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100021e00(L2CValue *param_1,L2CFighterCommon *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  float fVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,param_3);
  lua2cpp::L2CFighterCommon::sub_attack3_uniq_check(param_2,(L2CValue)0x90);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) goto LAB_71000220b4;
  bVar2 = app::lua_bind::SlowModule__is_skip_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator==(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar5 & 1) == 0) goto LAB_71000220b4;
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_RYU_STATUS_ATTACK_FLAG_RELEASE_BUTTON);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar6 = aLStack128;
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_RYU_STATUS_ATTACK_FLAG_BUTTON_TRIGGER);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar1 & 1U) == 0) goto LAB_71000220b4;
    lib::L2CValue::L2CValue(aLStack128,_CONTROL_PAD_BUTTON_ATTACK);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::ControlModule__check_button_on_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack128);
LAB_7100022064:
      lib::L2CValue::L2CValue(aLStack80,0);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_RYU_STATUS_ATTACK_INT_BUTTON_ON_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    else {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x1b);
      lib::L2CValue::L2CValue(aLStack160,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack176,0x12aaded0b6);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      uVar7 = lib::L2CValue::as_integer(aLStack176);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_2->moduleAccessor,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack144,fVar8);
      uVar5 = lib::L2CValue::operator<=(pLVar6,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) == 0) goto LAB_7100022064;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_ATTACK_INT_BUTTON_ON_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__inc_int_impl(param_2->moduleAccessor,iVar3);
    }
    pLVar6 = aLStack80;
  }
  lib::L2CValue::~L2CValue(pLVar6);
LAB_71000220b4:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

