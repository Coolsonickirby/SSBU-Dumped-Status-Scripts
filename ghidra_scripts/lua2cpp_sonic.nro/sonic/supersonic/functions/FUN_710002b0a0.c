
void FUN_710002b0a0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   L2CValue *param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  L2CValue *this;
  L2CValue *pLVar3;
  float fVar4;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined4 local_40;
  undefined4 uStack60;
  undefined4 local_38;
  undefined4 uStack52;
  
  local_40 = app::sv_camera_manager::camera_range();
  uStack60 = param_2;
  local_38 = param_3;
  uStack52 = param_4;
  app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0x102643cb05);
  lib::L2CValue::L2CValue(aLStack96,0x50f26fef6);
  uVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_6 + 0x40),uVar1,uVar2);
  lib::L2CValue::L2CValue(param_5,fVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0x102643cb05);
  lib::L2CValue::L2CValue(aLStack112,0xeb5e71c65);
  uVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar2 = lib::L2CValue::as_integer(aLStack112);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_6 + 0x40),uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x5b4ca7514);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x47a67e768);
  lib::L2CValue::operator-(this,pLVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0.1);
  lib::L2CValue::operator*(aLStack160,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::operator/(aLStack144,aLStack96);
  lib::L2CValue::operator+(param_5,aLStack128);
  lib::L2CValue::operator=(param_5,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack112,0x102643cb05);
  lib::L2CValue::L2CValue(aLStack128,0x99f2bb267);
  uVar1 = lib::L2CValue::as_integer(aLStack112);
  uVar2 = lib::L2CValue::as_integer(aLStack128);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_6 + 0x40),uVar1,uVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar4);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  uVar1 = lib::L2CValue::operator<((L2CValue *)&local_40,param_5);
  if ((uVar1 & 1) != 0) {
    lib::L2CValue::operator=(param_5,(L2CValue *)&local_40);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

