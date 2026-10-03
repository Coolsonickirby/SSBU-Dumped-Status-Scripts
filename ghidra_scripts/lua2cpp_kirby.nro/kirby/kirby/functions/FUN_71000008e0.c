
void FUN_71000008e0(L2CAgentBase *param_1)

{
  param_1->vtable = (void **)&LUA_SCRIPT_LINE_WAZA_CUSTOMIZE;
  lib::L2CValue::~L2CValue((L2CValue *)&param_1[2].field_0x60[1].field_0x10);
  lib::L2CValue::~L2CValue((L2CValue *)(param_1[2].field_0x60 + 1));
  lib::L2CValue::~L2CValue((L2CValue *)&param_1[2].field_0x60[0].field_0x8);
  lib::L2CValue::~L2CValue((L2CValue *)&param_1[2].field_0x58);
  lib::L2CValue::~L2CValue((L2CValue *)&param_1[2].field_0x48);
  lib::L2CValue::~L2CValue((L2CValue *)&param_1[2].battleObject);
  lib::L2CValue::~L2CValue((L2CValue *)&param_1[2].field_0x28);
  lib::L2CValue::~L2CValue((L2CValue *)&param_1[2].functions.bucketCount);
  lib::L2CValue::~L2CValue((L2CValue *)&param_1[2].luaStateAgent);
  lib::L2CValue::~L2CValue((L2CValue *)&param_1[1].field_0xc0);
  lib::L2CValue::~L2CValue((L2CValue *)&param_1[1].field_0x60[3].field_0x8);
  lib::L2CValue::~L2CValue((L2CValue *)&param_1[1].field_0x60[2].field_0x10);
  lib::L2CValue::~L2CValue((L2CValue *)(param_1[1].field_0x60 + 2));
  lib::L2CValue::~L2CValue((L2CValue *)&param_1[1].field_0x60[1].field_0x8);
  lib::L2CValue::~L2CValue((L2CValue *)&param_1[1].field_0x60[0].field_0x10);
  lib::L2CValue::~L2CValue((L2CValue *)param_1[1].field_0x60);
  lib::L2CValue::~L2CValue((L2CValue *)&param_1[1].field_0x50);
  param_1->vtable = (void **)&LUA_SCRIPT_STATUS_FUNC_EXEC_STOP;
  lib::L2CValue::~L2CValue((L2CValue *)&param_1[1].moduleAccessor);
  lib::L2CValue::~L2CValue((L2CValue *)&param_1[1].field_0x30);
  lib::L2CValue::~L2CValue((L2CValue *)&param_1[1].field_0x20);
  lib::L2CValue::~L2CValue((L2CValue *)&param_1[1].functions);
  lib::L2CValue::~L2CValue((L2CValue *)(param_1 + 1));
  lua2cpp::L2CAgentBase::~L2CAgentBase(param_1);
  return;
}

