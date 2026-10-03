
void FUN_710001e3a0(L2CValue *param_1,long param_2)

{
  byte bVar1;
  L2CValue *this;
  ulong uVar2;
  ulong uVar3;
  FighterModuleAccessor *pFVar4;
  Vector2f VVar5;
  float fVar6;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),5);
  lib::L2CValue::L2CValue(aLStack80,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack96,0xe355382bf);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack64,fVar6);
  lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack144,0xe4254b229);
  uVar2 = lib::L2CValue::as_integer(aLStack128);
  uVar3 = lib::L2CValue::as_integer(aLStack144);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar6);
  lib::L2CValue::L2CValue(aLStack192,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack208,0xc748d671d);
  uVar2 = lib::L2CValue::as_integer(aLStack192);
  uVar3 = lib::L2CValue::as_integer(aLStack208);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
  VVar5 = (Vector2f)uVar2;
  lib::L2CValue::L2CValue(aLStack176,fVar6);
  lib::L2CValue::operator-(aLStack176);
  pFVar4 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(this);
  fVar6 = (float)lib::L2CValue::as_number(aLStack64);
  lib::L2CValue::as_number(aLStack112);
  lib::L2CValue::as_number(aLStack160);
  bVar1 = app::FighterSpecializer_Murabito::check_special_lw_plant(pFVar4,VVar5,fVar6);
  lib::L2CValue::L2CValue(param_1,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

