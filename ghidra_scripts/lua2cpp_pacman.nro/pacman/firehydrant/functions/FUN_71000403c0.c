
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000403c0(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7,L2CValue *param_8,
                   L2CValue *param_9)

{
  int iVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  undefined auStack304 [16];
  Hash40MapEntry **local_120;
  ulong uStack280;
  L2CValue aLStack272 [24];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  lib::L2CValue::L2CValue(aLStack136,0);
  lib::L2CValue::L2CValue(aLStack152,0);
  lib::L2CValue::L2CValue(aLStack168,0);
  lib::L2CValue::L2CValue(aLStack184,0);
  lib::L2CValue::L2CValue(aLStack200,0);
  lib::L2CValue::L2CValue(aLStack216,0);
  lib::L2CValue::L2CValue(aLStack232,0);
  lib::L2CValue::L2CValue(aLStack248,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_CENTER_X)
  ;
  iVar1 = lib::L2CValue::as_integer(aLStack248);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),fVar4);
  lib::L2CValue::operator=(aLStack136,(L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue(aLStack248);
  lib::L2CValue::L2CValue(aLStack248,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_CENTER_Y)
  ;
  iVar1 = lib::L2CValue::as_integer(aLStack248);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),fVar4);
  lib::L2CValue::operator=(aLStack216,(L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue(aLStack248);
  lib::L2CValue::operator-(aLStack136);
  lib::L2CValue::operator=(aLStack168,(L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::operator-(aLStack216);
  lib::L2CValue::operator=(aLStack232,(L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::L2CValue(aLStack248,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_NUM);
  iVar1 = lib::L2CValue::as_integer(aLStack248);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),fVar4);
  lib::L2CValue::operator=(aLStack184,(L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue(aLStack248);
  lib::L2CValue::operator-(param_7);
  pLVar3 = aLStack320;
  lib::L2CValue::operator*(param_6,pLVar3);
  lib::L2CAgent::math_rad((L2CAgent *)auStack304,pLVar3);
  fVar4 = (float)lib::L2CValue::as_number(aLStack168);
  fVar5 = (float)lib::L2CValue::as_number(aLStack232);
  fVar6 = (float)lib::L2CValue::as_number(aLStack248);
  uVar8 = app::sv_math::vec2_rot(fVar4,fVar5,fVar6);
  lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),(float)uVar8);
  pLVar3 = (L2CValue *)(auStack304 + 0x20);
  lib::L2CValue::L2CValue(pLVar3,(float)((ulong)uVar8 >> 0x20));
  lib::L2CValue::operator=(aLStack200,(L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::operator=(aLStack152,pLVar3);
  lib::L2CValue::~L2CValue(pLVar3);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue(aLStack248);
  lib::L2CValue::~L2CValue((L2CValue *)auStack304);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack304 + 0x10),
             _WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_NUM);
  fVar4 = (float)lib::L2CValue::as_number(param_6);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)(auStack304 + 0x10));
  app::lua_bind::WorkModule__add_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::operator-(param_7);
  lib::L2CValue::operator*(param_6,(L2CValue *)auStack304);
  lib::L2CValue::operator+(param_5,aLStack248);
  lib::L2CValue::operator=(param_5,(L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue(aLStack248);
  lib::L2CValue::~L2CValue((L2CValue *)auStack304);
  lib::L2CValue::operator-(aLStack200);
  lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),0.0);
  lib::L2CValue::operator+((L2CValue *)auStack304,(L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack304 + 0x10),
             _WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_CENTER_X);
  fVar4 = (float)lib::L2CValue::as_number(aLStack248);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)(auStack304 + 0x10));
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue(aLStack248);
  lib::L2CValue::~L2CValue((L2CValue *)auStack304);
  lib::L2CValue::operator-(aLStack152);
  lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),0.0);
  lib::L2CValue::operator+((L2CValue *)auStack304,(L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack304 + 0x10),
             _WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_CENTER_Y);
  fVar4 = (float)lib::L2CValue::as_number(aLStack248);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)(auStack304 + 0x10));
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue(aLStack248);
  lib::L2CValue::~L2CValue((L2CValue *)auStack304);
  lib::L2CValue::L2CValue(aLStack336,param_5);
  lib::L2CValue::L2CValue(aLStack352,param_7);
  FUN_7100040f70(auStack304 + 0x10,param_1,aLStack336);
  lib::L2CValue::operator=(param_5,(L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::L2CValue(aLStack368,aLStack184);
  FUN_7100040cd0(aLStack248,param_1,aLStack368);
  lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),true);
  uVar2 = lib::L2CValue::operator==(aLStack248,(L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue(aLStack248);
  lib::L2CValue::~L2CValue(aLStack368);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::operator+(param_2,aLStack136);
    lib::L2CValue::operator+(aLStack248,aLStack200);
    lib::L2CValue::operator=(aLStack200,(L2CValue *)(auStack304 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
    lib::L2CValue::~L2CValue(aLStack248);
    lib::L2CValue::operator+(param_3,aLStack216);
    lib::L2CValue::operator+(aLStack248,aLStack152);
    lib::L2CValue::operator=(aLStack152,(L2CValue *)(auStack304 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
    lib::L2CValue::~L2CValue(aLStack248);
    lib::L2CValue::operator+(aLStack200,param_8);
    lib::L2CValue::operator=(aLStack200,(L2CValue *)(auStack304 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
    lib::L2CValue::operator+(aLStack152,param_9);
    lib::L2CValue::operator=(aLStack152,(L2CValue *)(auStack304 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
    lib::L2CValue::L2CValue(aLStack384,aLStack200);
    lib::L2CValue::L2CValue(aLStack400,aLStack152);
    lib::L2CValue::L2CValue(aLStack416,param_4);
    uVar2 = lib::L2CValue::as_number(aLStack384);
    lVar9 = lib::L2CValue::as_number(aLStack400);
    uVar7 = lib::L2CValue::as_number(aLStack416);
    local_120 = (Hash40MapEntry **)(uVar2 & 0xffffffff | lVar9 << 0x20);
    uStack280 = (ulong)uVar7;
    app::lua_bind::PostureModule__set_pos_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(Vector3f *)(auStack304 + 0x10));
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::L2CValue(aLStack432,param_5);
    FUN_71000412b0(param_1,aLStack432);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::L2CValue(aLStack448,param_6);
    lib::L2CValue::~L2CValue(aLStack448);
  }
  lib::L2CValue::~L2CValue(aLStack232);
  lib::L2CValue::~L2CValue(aLStack216);
  lib::L2CValue::~L2CValue(aLStack200);
  lib::L2CValue::~L2CValue(aLStack184);
  lib::L2CValue::~L2CValue(aLStack168);
  lib::L2CValue::~L2CValue(aLStack152);
  lib::L2CValue::~L2CValue(aLStack136);
  return;
}

