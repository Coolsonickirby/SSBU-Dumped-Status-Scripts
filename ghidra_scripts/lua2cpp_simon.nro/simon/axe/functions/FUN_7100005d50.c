
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100005d50(void *param_1)

{
  int iVar1;
  L2CValue *pLVar2;
  float fVar3;
  undefined8 uVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  uVar4 = app::lua_bind::GroundModule__center_pos_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack128,(float)uVar4);
  lib::L2CValue::L2CValue(aLStack112,(float)((ulong)uVar4 >> 0x20));
  lib::L2CValue::L2CValue(aLStack64,aLStack128);
  lib::L2CValue::L2CValue(aLStack80,aLStack112);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xc0,(L2CValue)0xb0);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::operator+(pLVar2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_SIMON_AXE_INSTANCE_WORK_ID_FLOAT_PREV_CENTER_X);
  fVar3 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar3,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::operator+(pLVar2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_SIMON_AXE_INSTANCE_WORK_ID_FLOAT_PREV_CENTER_Y);
  fVar3 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar3,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

