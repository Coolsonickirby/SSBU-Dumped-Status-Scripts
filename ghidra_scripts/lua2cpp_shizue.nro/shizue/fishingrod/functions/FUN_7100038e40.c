
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100038e40(long param_1)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  BattleObjectModuleAccessor *pBVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  Hash40 HVar8;
  float fVar9;
  uint uVar10;
  long lVar11;
  int in_stack_fffffffffffffdf4;
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  ulong local_80;
  ulong uStack120;
  ulong local_70;
  ulong uStack104;
  ulong local_60;
  ulong uStack88;
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack144,false);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),5);
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  bVar1 = app::WeaponSpecializer_ShizueFishingrod::is_float_touch_floor(pBVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
  uVar5 = lib::L2CValue::operator==((L2CValue *)&local_60,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) == 0) goto LAB_7100039540;
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_WEAPON_SHIZUE_FISHINGROD_INSTANCE_WORK_ID_FLAG_FLOAT_TOUCH_FLOOR
            );
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  uVar5 = lib::L2CValue::operator==((L2CValue *)&local_60,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_WEAPON_SHIZUE_FISHINGROD_INSTANCE_WORK_ID_FLAG_IN_WATER);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
    uVar5 = lib::L2CValue::operator==((L2CValue *)&local_60,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
LAB_71000393f8:
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,
                 _WEAPON_SHIZUE_FISHINGROD_INSTANCE_WORK_ID_FLOAT_FLOAT_SPEED_Y);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar9);
      lib::L2CValue::L2CValue(aLStack160,0x10abbfb75a);
      lib::L2CValue::L2CValue(aLStack176,0x196bd543f5);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      uVar6 = lib::L2CValue::as_integer(aLStack176);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar9);
      lib::L2CValue::operator-((L2CValue *)&local_80);
      uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_50,(L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_80);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) == 0) goto LAB_7100039520;
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0x151f70fe73);
      HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_50);
      iVar2 = app::lua_bind::SoundModule__play_se_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7,true,false,false,
                         false,0);
      lib::L2CValue::L2CValue(aLStack464,iVar2);
      pLVar3 = aLStack464;
    }
    else {
      pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),5);
      pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
      iVar2 = app::WeaponSpecializer_ShizueFishingrod::get_float_touch_floor_material(pBVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar2);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_GROUND_COLL_ATTR_ASASE);
      uVar5 = lib::L2CValue::operator==((L2CValue *)&local_80,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_80);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      if ((uVar5 & 1) == 0) goto LAB_71000393f8;
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,
                 _WEAPON_SHIZUE_FISHINGROD_INSTANCE_WORK_ID_FLOAT_FLOAT_SPEED_Y);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar9);
      lib::L2CValue::L2CValue(aLStack160,0x10abbfb75a);
      lib::L2CValue::L2CValue(aLStack176,0x1a0a2b2724);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      uVar6 = lib::L2CValue::as_integer(aLStack176);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar9);
      lib::L2CValue::operator-((L2CValue *)&local_80);
      uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_50,(L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_80);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) == 0) goto LAB_7100039520;
      lib::L2CValue::L2CValue(aLStack160,0x1b82ba98a4);
      lib::L2CValue::L2CValue(aLStack176,0x59d29c68e);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,1.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      lib::L2CValue::L2CValue(aLStack368,0.0);
      lib::L2CValue::L2CValue(aLStack384,0.0);
      lib::L2CValue::L2CValue(aLStack400,0.0);
      lib::L2CValue::L2CValue(aLStack416,false);
      lib::L2CValue::L2CValue(aLStack432,_EFFECT_SUB_ATTRIBUTE_WATER_SURFACE_POS);
      HVar7 = lib::L2CValue::as_hash(aLStack160);
      HVar8 = lib::L2CValue::as_hash(aLStack176);
      uVar5 = lib::L2CValue::as_number(aLStack208);
      lVar11 = lib::L2CValue::as_number(aLStack224);
      uVar10 = lib::L2CValue::as_number(aLStack240);
      local_50 = uVar5 & 0xffffffff | lVar11 << 0x20;
      uStack72 = (ulong)uVar10;
      uVar5 = lib::L2CValue::as_number(aLStack256);
      lVar11 = lib::L2CValue::as_number(aLStack272);
      uVar10 = lib::L2CValue::as_number(aLStack288);
      local_60 = uVar5 & 0xffffffff | lVar11 << 0x20;
      uStack88 = (ulong)uVar10;
      fVar9 = (float)lib::L2CValue::as_number(aLStack304);
      uVar5 = lib::L2CValue::as_number(aLStack320);
      lVar11 = lib::L2CValue::as_number(aLStack336);
      uVar10 = lib::L2CValue::as_number(aLStack352);
      local_70 = uVar5 & 0xffffffff | lVar11 << 0x20;
      uStack104 = (ulong)uVar10;
      uVar5 = lib::L2CValue::as_number(aLStack368);
      lVar11 = lib::L2CValue::as_number(aLStack384);
      uVar10 = lib::L2CValue::as_number(aLStack400);
      local_80 = uVar5 & 0xffffffff | lVar11 << 0x20;
      uStack120 = (ulong)uVar10;
      bVar1 = lib::L2CValue::as_bool(aLStack416);
      uVar10 = lib::L2CValue::as_integer(aLStack432);
      uVar10 = app::lua_bind::EffectModule__req_on_joint_impl
                         (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7,HVar8,
                          (Vector3f *)&local_50,(Vector3f *)&local_60,fVar9,(Vector3f *)&local_70,
                          (Vector3f *)&local_80,(bool)(bVar1 & 1),uVar10,in_stack_fffffffffffffdf4,0
                         );
      lib::L2CValue::L2CValue(aLStack192,uVar10);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1576013bbd);
      HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_50);
      iVar2 = app::lua_bind::SoundModule__play_se_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7,true,false,false,
                         false,0);
      lib::L2CValue::L2CValue(aLStack448,iVar2);
      pLVar3 = aLStack448;
    }
    lib::L2CValue::~L2CValue(pLVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  }
LAB_7100039520:
  lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
  lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
LAB_7100039540:
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_WEAPON_SHIZUE_FISHINGROD_INSTANCE_WORK_ID_FLAG_FLOAT_TOUCH_FLOOR
            );
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_flag_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1),iVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}

