
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000232b0(L2CValue *param_1,void *param_2)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  bool bVar4;
  float fVar5;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),2);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KIND_WOLF);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    bVar4 = false;
  }
  else {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
      fVar5 = (float)lib::L2CValue::as_number(aLStack80);
      iVar1 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),fVar5,iVar1);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
      lib::L2CValue::L2CValue(aLStack160,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x70,(L2CValue)0x60);
      lib::L2CValue::~L2CValue(aLStack160);
      pLVar2 = aLStack144;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_FALL_SPECIAL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xa0,(L2CValue)0x90);
      lib::L2CValue::~L2CValue(aLStack112);
      pLVar2 = aLStack96;
    }
    lib::L2CValue::~L2CValue(pLVar2);
    bVar4 = true;
  }
  lib::L2CValue::L2CValue(param_1,bVar4);
  return;
}

