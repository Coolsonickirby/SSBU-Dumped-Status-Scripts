
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003fa30(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_PIKMIN_PIKMIN_STATUS_DAMAGE_FLY_WORK_INT_REACTION_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar3 = lib::L2CValue::operator<(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      iVar2 = 1;
      goto LAB_710003fb50;
    }
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_DAMAGE_FLY_WORK_INT_REACTION_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__dec_int_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  iVar2 = 0;
LAB_710003fb50:
  lib::L2CValue::L2CValue(param_1,iVar2);
  return;
}

