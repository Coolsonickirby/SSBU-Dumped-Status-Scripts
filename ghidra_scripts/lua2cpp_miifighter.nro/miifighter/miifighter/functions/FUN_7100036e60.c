
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100036e60(long param_1,L2CValue *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *this;
  float fVar4;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
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
  
  fVar4 = (float)app::lua_bind::PostureModule__scale_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::L2CValue(aLStack112,param_2);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar2 = lib::L2CValue::operator==(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,1);
    uVar2 = lib::L2CValue::operator==(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) goto LAB_710003751c;
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MIIFIGHTER_INSTANCE_WORK_ID_FLOAT_CAM_COUNT);
    iVar1 = lib::L2CValue::as_integer(aLStack160);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack144,fVar4);
    lib::L2CValue::L2CValue(aLStack80,10.0);
    lib::L2CValue::operator/(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    uVar2 = lib::L2CValue::operator<=(aLStack80,aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,1.0);
      lib::L2CValue::operator=(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIFIGHTER_INSTANCE_WORK_ID_FLOAT_CAM_OFS_Y);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack144,fVar4);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIFIGHTER_INSTANCE_WORK_ID_FLOAT_CAM_OFS_Z);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack160,fVar4);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator-(aLStack80,aLStack144);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::operator*(aLStack240,aLStack128);
    lib::L2CValue::operator+(aLStack192,aLStack144);
    lib::L2CValue::operator=(aLStack144,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator-(aLStack80,aLStack160);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::operator*(aLStack240,aLStack128);
    lib::L2CValue::operator+(aLStack192,aLStack160);
    lib::L2CValue::operator=(aLStack160,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::operator*(aLStack144,aLStack96);
    lib::L2CValue::operator*(aLStack160,aLStack96);
    FUN_7100011b90(aLStack256,aLStack272);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_MIIFIGHTER_INSTANCE_WORK_ID_FLOAT_CAM_COUNT);
    fVar4 = (float)lib::L2CValue::as_number(aLStack80);
    iVar1 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::WorkModule__add_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack160);
    this = aLStack144;
  }
  else {
    iVar1 = app::sv_information::stage_id();
    lib::L2CValue::L2CValue(aLStack128,iVar1);
    lib::L2CValue::L2CValue(aLStack80,_DAT_7100204e58);
    uVar2 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack128);
    }
    else {
      fVar4 = (float)app::lua_bind::PostureModule__base_scale_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
      lib::L2CValue::L2CValue(aLStack144,fVar4);
      lib::L2CValue::L2CValue(aLStack80,1.0);
      uVar2 = lib::L2CValue::operator<(aLStack80,aLStack144);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar2 & 1) != 0) goto LAB_710003751c;
    }
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MIIFIGHTER_INSTANCE_WORK_ID_FLOAT_CAM_COUNT);
    iVar1 = lib::L2CValue::as_integer(aLStack144);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack80,fVar4);
    lib::L2CValue::L2CValue(aLStack176,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack192,0x1f8bd94de9);
    uVar2 = lib::L2CValue::as_integer(aLStack176);
    uVar3 = lib::L2CValue::as_integer(aLStack192);
    fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack160,fVar4);
    lib::L2CValue::operator/(aLStack80,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    uVar2 = lib::L2CValue::operator<=(aLStack80,aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,1.0);
      lib::L2CValue::operator=(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack160,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack176,0x1c692bcd92);
    uVar2 = lib::L2CValue::as_integer(aLStack160);
    uVar3 = lib::L2CValue::as_integer(aLStack176);
    fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack144,fVar4);
    lib::L2CValue::operator*(aLStack144,aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack176,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack192,0x1cf0229c28);
    uVar2 = lib::L2CValue::as_integer(aLStack176);
    uVar3 = lib::L2CValue::as_integer(aLStack192);
    fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack160,fVar4);
    lib::L2CValue::operator*(aLStack160,aLStack128);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::operator*(aLStack80,aLStack96);
    lib::L2CValue::operator*(aLStack144,aLStack96);
    FUN_7100011b90(aLStack208,aLStack224);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack160,1.0);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_MIIFIGHTER_INSTANCE_WORK_ID_FLOAT_CAM_COUNT);
    fVar4 = (float)lib::L2CValue::as_number(aLStack160);
    iVar1 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::WorkModule__add_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MIIFIGHTER_INSTANCE_WORK_ID_FLOAT_CAM_OFS_Y);
    fVar4 = (float)lib::L2CValue::as_number(aLStack80);
    iVar1 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MIIFIGHTER_INSTANCE_WORK_ID_FLOAT_CAM_OFS_Z);
    fVar4 = (float)lib::L2CValue::as_number(aLStack144);
    iVar1 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    this = aLStack80;
  }
  lib::L2CValue::~L2CValue(this);
  lib::L2CValue::~L2CValue(aLStack128);
LAB_710003751c:
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

