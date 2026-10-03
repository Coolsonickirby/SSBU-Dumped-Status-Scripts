
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100046bc0(void *param_1,L2CValue *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
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
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0xcc40f4e28);
  lib::L2CValue::L2CValue(aLStack128,0x1fec9c4f76);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack96,fVar5);
  lib::L2CValue::L2CValue(aLStack64,10.0);
  lib::L2CValue::operator*(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,0xcc40f4e28);
  lib::L2CValue::L2CValue(aLStack144,0x1fd091702f);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack112,fVar5);
  lib::L2CValue::L2CValue(aLStack64,10.0);
  lib::L2CValue::operator*(aLStack112,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack64,0xcc40f4e28);
  lib::L2CValue::L2CValue(aLStack128,0x19b2e6a87a);
  uVar3 = lib::L2CValue::as_integer(aLStack64);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack112,fVar5);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xcc40f4e28);
  lib::L2CValue::L2CValue(aLStack144,0x198eeb9723);
  uVar3 = lib::L2CValue::as_integer(aLStack64);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack128,fVar5);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack64);
  fVar5 = (float)app::lua_bind::PostureModule__pos_y_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack64,fVar5);
  lib::L2CValue::operator-(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  uVar3 = lib::L2CValue::operator<=(aLStack80,aLStack144);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,aLStack144);
    lib::L2CValue::L2CValue(aLStack176,aLStack80);
    lib::L2CValue::L2CValue(aLStack192,aLStack96);
    lua2cpp::L2CFighterBase::clamp(param_1,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
    lib::L2CValue::operator=(aLStack144,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::operator-(aLStack96,aLStack80);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar3 = lib::L2CValue::operator<(aLStack64,aLStack208);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::operator-(aLStack144,aLStack80);
      lib::L2CValue::operator/(aLStack224,aLStack208);
      lib::L2CValue::operator=(aLStack208,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::operator-(aLStack128,aLStack112);
      lib::L2CValue::L2CValue(aLStack64,0.0);
      uVar3 = lib::L2CValue::operator<(aLStack64,aLStack224);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::operator*(aLStack224,aLStack208);
        lib::L2CValue::operator+(aLStack112,aLStack240);
        lib::L2CValue::operator=(aLStack224,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_HP);
        iVar1 = lib::L2CValue::as_integer(aLStack224);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__sub_int_impl
                  (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1,iVar2);
        lib::L2CValue::~L2CValue(aLStack64);
      }
      lib::L2CValue::~L2CValue(aLStack224);
    }
    lib::L2CValue::~L2CValue(aLStack208);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

