
void FUN_710001f420(void *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6)

{
  ulong uVar1;
  L2CValue *this;
  BattleObjectModuleAccessor *pBVar2;
  float fVar3;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  uVar1 = lib::L2CValue::operator==(param_5,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
  if ((uVar1 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::operator=(param_5,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::operator+(param_5,param_4);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar1 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar1 & 1) == 0) {
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),0xe);
    lib::L2CValue::operator+(param_5,param_4);
    lib::L2CValue::operator/(this,aLStack96);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,1.0);
    lua2cpp::L2CFighterBase::clamp(param_1,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack192,param_2);
    lib::L2CValue::L2CValue(aLStack208,param_3);
    lib::L2CValue::L2CValue(aLStack224,aLStack112);
    lua2cpp::L2CFighterBase::lerp(param_1,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack96,1e-05);
    uVar1 = lib::L2CValue::operator<=(aLStack176,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar1 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,1e-05);
      lib::L2CValue::operator=(aLStack176,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    uVar1 = lib::L2CValue::operator==(param_6,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
    if ((uVar1 & 1) == 0) {
      pBVar2 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(param_6);
      fVar3 = (float)app::lua_bind::PostureModule__base_scale_impl(pBVar2);
      lib::L2CValue::L2CValue(aLStack96,fVar3);
      lib::L2CValue::operator/(aLStack176,aLStack96);
      fVar3 = (float)lib::L2CValue::as_number(aLStack240);
      pBVar2 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(param_6);
      app::lua_bind::PostureModule__set_owner_scale_impl(pBVar2,fVar3);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    else {
      fVar3 = (float)lib::L2CValue::as_number(aLStack176);
      app::lua_bind::PostureModule__set_scale_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar3,false);
    }
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  return;
}

