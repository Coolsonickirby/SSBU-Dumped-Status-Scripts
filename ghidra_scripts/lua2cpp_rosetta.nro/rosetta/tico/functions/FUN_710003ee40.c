
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003ee40(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) goto LAB_710003ef84;
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_COMMON_WORK_INT_PAD_FLAG);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_FLAG_ATTACK_TRIGGER);
  lib::L2CValue::operator&(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  if ((bVar1 & 1U) == 0) {
    this = aLStack96;
LAB_710003ef78:
    lib::L2CValue::~L2CValue(this);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_WORK_FLAG_ENABLE_COMBO);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_WORK_FLAG_CONNECT_COMBO);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      this = aLStack64;
      goto LAB_710003ef78;
    }
  }
  lib::L2CValue::~L2CValue(aLStack80);
LAB_710003ef84:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

