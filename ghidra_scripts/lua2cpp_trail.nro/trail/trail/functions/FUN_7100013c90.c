
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100013c90(L2CValue *param_1,L2CFighterCommon *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,param_3);
  lua2cpp::L2CFighterCommon::attack_air_uniq(param_2,(L2CValue)0x90);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) goto LAB_7100013e98;
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x20);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N);
  lib::L2CValue::operator&(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack128);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack160,_FIGHTER_TRAIL_STATUS_ATTACK_AIR_N_FLAG_CHECK_COMBO_BUTTON_ON);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator==(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack192,_CONTROL_PAD_BUTTON_ATTACK);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      bVar2 = app::lua_bind::ControlModule__check_button_on_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator==(aLStack176,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        bVar1 = true;
        goto LAB_7100013d3c;
      }
      bVar2 = 0;
      goto LAB_7100013e40;
    }
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    pLVar4 = aLStack128;
  }
  else {
    bVar1 = false;
LAB_7100013d3c:
    bVar2 = app::lua_bind::ComboModule__is_enable_combo_input_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if (bVar1) {
LAB_7100013e40:
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
    }
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar2 & 1) == 0) goto LAB_7100013e98;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TRAIL_STATUS_ATTACK_AIR_N_FLAG_CONNECT_COMBO);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar3);
    pLVar4 = aLStack80;
  }
  lib::L2CValue::~L2CValue(pLVar4);
LAB_7100013e98:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

