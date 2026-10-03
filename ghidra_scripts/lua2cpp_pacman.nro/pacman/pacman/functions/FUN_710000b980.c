
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000b980(L2CValue *param_1,void *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PACMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_S_DAMAGE_POWERESA)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    iVar3 = 0;
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),9);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PACMAN_STATUS_KIND_SPECIAL_S_MOVE);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACMAN_STATUS_KIND_SPECIAL_S_RETURN);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x80,(L2CValue)0x70);
      lib::L2CValue::~L2CValue(aLStack144);
      pLVar4 = aLStack128;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACMAN_STATUS_KIND_SPECIAL_S_DASH);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xa0,(L2CValue)0x90);
      lib::L2CValue::~L2CValue(aLStack112);
      pLVar4 = aLStack96;
    }
    lib::L2CValue::~L2CValue(pLVar4);
    iVar3 = 1;
  }
  lib::L2CValue::L2CValue(param_1,iVar3);
  return;
}

