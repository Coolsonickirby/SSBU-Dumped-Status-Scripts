
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100017ba0(long param_1)

{
  int iVar1;
  float *pfVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
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
  
  pfVar2 = (float *)app::lua_bind::PostureModule__pos_impl
                              (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack160,*pfVar2);
  lib::L2CValue::L2CValue(aLStack144,pfVar2[1]);
  lib::L2CValue::L2CValue(aLStack128,pfVar2[2]);
  FUN_71000030b0(aLStack112,param_1,aLStack160);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  fVar6 = (float)app::lua_bind::PostureModule__base_scale_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack176,fVar6);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack240,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack256,0x12bdcd313c);
    uVar4 = lib::L2CValue::as_integer(aLStack240);
    uVar5 = lib::L2CValue::as_integer(aLStack256);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack224,fVar6);
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack272,fVar6);
    lib::L2CValue::operator*(aLStack224,aLStack272);
    lib::L2CValue::operator*(aLStack208,aLStack176);
    lib::L2CValue::operator+(pLVar3,aLStack192);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::operator=(pLVar3,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack224,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack240,0x12caca01aa);
    uVar4 = lib::L2CValue::as_integer(aLStack224);
    uVar5 = lib::L2CValue::as_integer(aLStack240);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack208,fVar6);
    lib::L2CValue::operator*(aLStack208,aLStack176);
    lib::L2CValue::operator+(pLVar3,aLStack192);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar3,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x162d277af);
    lib::L2CValue::L2CValue(aLStack224,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack240,0x1253c35010);
    uVar4 = lib::L2CValue::as_integer(aLStack224);
    uVar5 = lib::L2CValue::as_integer(aLStack240);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack208,fVar6);
    lib::L2CValue::operator*(aLStack208,aLStack176);
    lib::L2CValue::operator+(pLVar3,aLStack192);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x162d277af);
    lib::L2CValue::operator=(pLVar3,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator+(pLVar3,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SIMON_STATUS_WORK_ID_FLOAT_FINAL_COFFIN_POS_X);
    fVar6 = (float)lib::L2CValue::as_number(aLStack192);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6,iVar1);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack192);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator+(pLVar3,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SIMON_STATUS_WORK_ID_FLOAT_FINAL_COFFIN_POS_Y);
    fVar6 = (float)lib::L2CValue::as_number(aLStack192);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6,iVar1);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack192);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x162d277af);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator+(pLVar3,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SIMON_STATUS_WORK_ID_FLOAT_FINAL_COFFIN_POS_Z);
    fVar6 = (float)lib::L2CValue::as_number(aLStack192);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6,iVar1);
  }
  else {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack240,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack256,0xe9614e291);
    uVar4 = lib::L2CValue::as_integer(aLStack240);
    uVar5 = lib::L2CValue::as_integer(aLStack256);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack224,fVar6);
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack272,fVar6);
    lib::L2CValue::operator*(aLStack224,aLStack272);
    lib::L2CValue::operator*(aLStack208,aLStack176);
    lib::L2CValue::operator+(pLVar3,aLStack192);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::operator=(pLVar3,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack224,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack240,0xee113d207);
    uVar4 = lib::L2CValue::as_integer(aLStack224);
    uVar5 = lib::L2CValue::as_integer(aLStack240);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack208,fVar6);
    lib::L2CValue::operator*(aLStack208,aLStack176);
    lib::L2CValue::operator+(pLVar3,aLStack192);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar3,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x162d277af);
    lib::L2CValue::L2CValue(aLStack224,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack240,0xe781a83bd);
    uVar4 = lib::L2CValue::as_integer(aLStack224);
    uVar5 = lib::L2CValue::as_integer(aLStack240);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack208,fVar6);
    lib::L2CValue::operator*(aLStack208,aLStack176);
    lib::L2CValue::operator+(pLVar3,aLStack192);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x162d277af);
    lib::L2CValue::operator=(pLVar3,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator+(pLVar3,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SIMON_STATUS_WORK_ID_FLOAT_FINAL_COFFIN_POS_X);
    fVar6 = (float)lib::L2CValue::as_number(aLStack192);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6,iVar1);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack192);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator+(pLVar3,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SIMON_STATUS_WORK_ID_FLOAT_FINAL_COFFIN_POS_Y);
    fVar6 = (float)lib::L2CValue::as_number(aLStack192);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6,iVar1);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack192);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x162d277af);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator+(pLVar3,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SIMON_STATUS_WORK_ID_FLOAT_FINAL_COFFIN_POS_Z);
    fVar6 = (float)lib::L2CValue::as_number(aLStack192);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6,iVar1);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

