
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000cbb0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  uint uVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CTable *this;
  L2CValue *this_00;
  L2CAgent *this_01;
  float fVar4;
  undefined8 uVar5;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(param_1,0.0);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar3 & 1) != 0) {
    this = (L2CTable *)operator.new(0x48);
    lib::L2CTable::L2CTable(this,0);
    lib::L2CValue::L2CValue(aLStack80,this);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack112,0);
    lib::L2CValue::operator=(pLVar2,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack112,0);
    lib::L2CValue::operator=(pLVar2,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack128,GROUND_TOUCH_FLAG_DOWN);
    uVar1 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = app::lua_bind::GroundModule__get_touch_normal_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar1);
    lib::L2CValue::L2CValue(aLStack112,(float)uVar5);
    lib::L2CValue::L2CValue(aLStack96,(float)((ulong)uVar5 >> 0x20));
    lib::L2CValue::operator=(pLVar2,aLStack112);
    lib::L2CValue::operator=(this_00,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    this_01 = (L2CAgent *)lib::L2CValue::operator[](aLStack80,0x18cdc1683);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x1fbdb2615);
    lib::L2CAgent::math_atan(this_01,pLVar2,param_3);
    lib::L2CAgent::math_deg((L2CAgent *)aLStack128,pLVar2);
    fVar4 = (float)app::lua_bind::PostureModule__lr_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack160,fVar4);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    uVar3 = lib::L2CValue::operator==(aLStack160,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::operator-(aLStack144);
      lib::L2CValue::operator=(param_1,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    else {
      lib::L2CValue::operator=(param_1,aLStack144);
    }
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  return;
}

