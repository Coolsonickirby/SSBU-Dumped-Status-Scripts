
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710000b630(L2CFighterMiigunner *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  Hash40 HVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor *pBVar10;
  uint uVar11;
  float fVar12;
  long lVar13;
  int in_stack_fffffffffffffde4;
  undefined in_stack_fffffffffffffdec;
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
  ulong local_a0;
  ulong uStack152;
  ulong local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::operator=(aLStack192,pLVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_MIIGUNNER_STATUS_KIND_SPECIAL_N1_FIRE);
  uVar7 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_MIIGUNNER_STATUS_KIND_SPECIAL_N1_CANCEL);
    uVar7 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_90);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_90,FIGHTER_STATUS_KIND_GUARD_ON);
      uVar7 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_90);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_90,FIGHTER_STATUS_KIND_ESCAPE);
        uVar7 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_90);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_STATUS_KIND_ESCAPE_F);
          uVar7 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_90);
          lib::L2CValue::~L2CValue((L2CValue *)&local_90);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_90,FIGHTER_STATUS_KIND_ESCAPE_B);
            uVar7 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_90);
            lib::L2CValue::~L2CValue((L2CValue *)&local_90);
            if ((uVar7 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_90,0);
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_a0,
                         _FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GUNNER_CHARGE_COUNT);
              iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
              iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
              app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
              lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
              lib::L2CValue::~L2CValue((L2CValue *)&local_90);
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_90,_FIGHTER_MIIGUNNER_GENERATE_ARTICLE_GUNNERCHARGE);
              iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
              app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar3,0);
              lib::L2CValue::~L2CValue((L2CValue *)&local_90);
              lib::L2CValue::L2CValue((L2CValue *)&local_90,0xaec2db62e);
              HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_90);
              app::lua_bind::EffectModule__remove_common_impl(this->moduleAccessor,HVar8);
              lib::L2CValue::~L2CValue((L2CValue *)&local_90);
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_a0,
                         _FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_EFH_CHARGE_MAX);
              iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
              iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar3);
              lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_90);
              lib::L2CValue::~L2CValue((L2CValue *)&local_90);
              lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
              lib::L2CValue::L2CValue((L2CValue *)&local_90,0);
              uVar7 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_90);
              lib::L2CValue::~L2CValue((L2CValue *)&local_90);
              if ((uVar7 & 1) == 0) {
                lib::L2CValue::L2CValue((L2CValue *)&local_a0,_MA_MSC_EFFECT_REMOVE);
                lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
                lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_a0);
                lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
                app::sv_module_access::effect(this->luaStateAgent);
                lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
                lib::L2CValue::~L2CValue((L2CValue *)&local_90);
                lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
              }
              goto LAB_710000bb5c;
            }
          }
        }
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_MIIGUNNER_GENERATE_ARTICLE_GUNNERCHARGE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar3,0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_a0,_FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GUNNER_CHARGE_COUNT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar3);
    FUN_7100015400(aLStack208,this);
    uVar7 = lib::L2CValue::operator<=(aLStack208,(L2CValue *)&local_90);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0xaec2db62e);
      HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_90);
      app::lua_bind::EffectModule__req_common_impl(this->moduleAccessor,HVar8,0.0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::L2CValue(aLStack224,0x136c65c600);
      lib::L2CValue::L2CValue(aLStack240,0x49bf3f6be);
      lib::L2CValue::L2CValue(aLStack256,6.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,1.0);
      lib::L2CValue::L2CValue(aLStack368,false);
      lib::L2CValue::L2CValue(aLStack384,0);
      lib::L2CValue::L2CValue(aLStack400,0);
      lib::L2CValue::L2CValue(aLStack416,0);
      lib::L2CValue::L2CValue(aLStack432,_EFFECT_FLIP_NONE);
      lib::L2CValue::L2CValue(aLStack448,0);
      lib::L2CValue::L2CValue(aLStack464,true);
      HVar8 = lib::L2CValue::as_hash(aLStack224);
      HVar9 = lib::L2CValue::as_hash(aLStack240);
      uVar7 = lib::L2CValue::as_number(aLStack256);
      lVar13 = lib::L2CValue::as_number(aLStack272);
      uVar11 = lib::L2CValue::as_number(aLStack288);
      local_90 = uVar7 & 0xffffffff | lVar13 << 0x20;
      uStack136 = (ulong)uVar11;
      uVar7 = lib::L2CValue::as_number(aLStack304);
      lVar13 = lib::L2CValue::as_number(aLStack320);
      uVar11 = lib::L2CValue::as_number(aLStack336);
      local_a0 = uVar7 & 0xffffffff | lVar13 << 0x20;
      uStack152 = (ulong)uVar11;
      fVar12 = (float)lib::L2CValue::as_number(aLStack352);
      bVar1 = lib::L2CValue::as_bool(aLStack368);
      uVar11 = lib::L2CValue::as_integer(aLStack384);
      iVar3 = lib::L2CValue::as_integer(aLStack400);
      iVar4 = lib::L2CValue::as_integer(aLStack416);
      iVar5 = lib::L2CValue::as_integer(aLStack432);
      bVar2 = (bool)lib::L2CValue::as_integer(aLStack448);
      lib::L2CValue::as_bool(aLStack464);
      uVar11 = app::lua_bind::EffectModule__req_follow_impl
                         (this->moduleAccessor,HVar8,HVar9,(Vector3f *)&local_90,
                          (Vector3f *)&local_a0,fVar12,(bool)(bVar1 & 1),uVar11,iVar3,iVar4,
                          in_stack_fffffffffffffde4,iVar5,(bool)in_stack_fffffffffffffdec,bVar2);
      lib::L2CValue::L2CValue(aLStack208,uVar11);
      lib::L2CValue::operator=(aLStack176,aLStack208);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack464);
      lib::L2CValue::~L2CValue(aLStack448);
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
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_EFH_CHARGE_MAX);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,5);
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
      app::FighterUtil::flash_eye_info(pBVar10);
    }
  }
LAB_710000bb5c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  return;
}

