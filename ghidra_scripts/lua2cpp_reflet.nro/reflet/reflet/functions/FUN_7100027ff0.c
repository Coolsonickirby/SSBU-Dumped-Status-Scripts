
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100027ff0(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this;
  FighterModuleAccessor *pFVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue
            (aLStack64,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THUNDER_SWORD_CURRENT_POINT);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__dec_int_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THUNDER_SWORD_CURRENT_POINT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar4 = lib::L2CValue::operator<=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),5);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_MAGIC_KIND_SWORD);
    lib::L2CValue::L2CValue(aLStack80,true);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THROWAWAY_TABLE);
    pFVar5 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(this);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::FighterSpecializer_Reflet::set_flag_to_table(pFVar5,iVar2,(bool)(bVar1 & 1),iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

