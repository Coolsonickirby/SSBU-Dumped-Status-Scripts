
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100046050(undefined8 param_1,void *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *this;
  float fVar4;
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
  lib::L2CValue::L2CValue(aLStack128,0x27619bc16b);
  uVar2 = lib::L2CValue::as_integer(aLStack112);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::L2CValue(aLStack64,10.0);
  lib::L2CValue::operator*(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  fVar4 = (float)app::lua_bind::PostureModule__pos_x_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack144,fVar4);
  fVar4 = (float)app::lua_bind::PostureModule__pos_y_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack160,fVar4);
  lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLOAT_OWNER_X);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack176,fVar4);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLOAT_OWNER_Y);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack192,fVar4);
  lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x50,(L2CValue)0x40);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::operator-(aLStack112,aLStack96);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::operator=(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack208,aLStack128);
  lua2cpp::L2CFighterBase::Vector2__length(param_2,(L2CValue)0x30);
  lib::L2CValue::~L2CValue(aLStack208);
  uVar2 = lib::L2CValue::operator<(aLStack80,aLStack64);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::operator=(aLStack64,aLStack80);
  }
  lib::L2CValue::operator/(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

