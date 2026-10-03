
void FUN_7100020250(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 local_50;
  undefined8 uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xcedec4cee);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1754abac45);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack112,fVar5);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::operator-(aLStack112);
  lib::L2CValue::L2CValue(aLStack160,true);
  uVar6 = lib::L2CValue::as_number(param_3);
  uVar7 = lib::L2CValue::as_number(param_4);
  local_50 = CONCAT44(uVar7,uVar6);
  uStack72 = 0;
  uVar6 = lib::L2CValue::as_number(aLStack128);
  uVar7 = lib::L2CValue::as_number(aLStack144);
  local_60 = CONCAT44(uVar7,uVar6);
  uStack88 = 0;
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  bVar1 = app::lua_bind::GroundModule__ray_check_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(Vector2f *)&local_50,
                     (Vector2f *)&local_60,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(param_1,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::operator-(param_4,aLStack112);
  lib::L2CValue::L2CValue(aLStack144,1);
  uVar6 = lib::L2CValue::as_number(param_3);
  uVar7 = lib::L2CValue::as_number(param_4);
  local_50 = CONCAT44(uVar7,uVar6);
  uStack72 = 0;
  uVar6 = lib::L2CValue::as_number(param_3);
  uVar7 = lib::L2CValue::as_number(aLStack128);
  local_60 = CONCAT44(uVar7,uVar6);
  uStack88 = 0;
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  app::sv_debug_draw::draw_line((Vector2f *)&local_50,(Vector2f *)&local_60,iVar2);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

