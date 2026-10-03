
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100026250(L2CValue *param_1,L2CAgent *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  void *pvVar7;
  BattleObjectModuleAccessor *pBVar8;
  ulong uVar9;
  ulong *this;
  L2CValue *pLVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long lVar15;
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  undefined auStack384 [32];
  ulong auStack352 [2];
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
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue(aLStack304,0);
  ppBVar11 = &param_2->moduleAccessor;
  iVar3 = app::lua_bind::GroundModule__get_correct_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack320,iVar3);
  lib::L2CValue::L2CValue(aLStack336,_LINK_NO_ARTICLE);
  iVar3 = lib::L2CValue::as_integer(aLStack336);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack336);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_LINK_NO_ARTICLE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar4 = app::lua_bind::LinkModule__get_parent_id_impl(*ppBVar11,iVar3,true);
    lib::L2CValue::L2CValue(aLStack336,uVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack384 + 0x10),_WN_LINK_BOOMERANG_INSTANCE_WORK_ID_FLAG_REFLECT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack384 + 0x10));
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    uVar6 = lib::L2CValue::operator==((L2CValue *)auStack352,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::~L2CValue((L2CValue *)auStack352);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
    }
    else {
      uVar4 = app::lua_bind::TeamModule__team_owner_id_impl(*ppBVar11);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,uVar4);
      uVar6 = lib::L2CValue::operator==((L2CValue *)&local_60,aLStack336);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)auStack352);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0x51a36341b);
        lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack352,_FL_MA_MSC_LINK_GET_PARENT_MODEL_NODE_GLOBAL_POSITION_X);
        lib::L2CValue::L2CValue((L2CValue *)(auStack384 + 0x10),_LINK_NO_ARTICLE);
        lib::L2CValue::L2CValue((L2CValue *)auStack384,true);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack352);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)(auStack384 + 0x10));
        lib::L2CAgent::push_lua_stack(param_2,aLStack112);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack384);
        app::FL_sv_module_access::link(param_2->luaStateAgent);
        lib::L2CAgent::pop_lua_stack(param_2,1);
        lib::L2CValue::operator=(aLStack224,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)auStack384);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack352);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack352,_FL_MA_MSC_LINK_GET_PARENT_MODEL_NODE_GLOBAL_POSITION_Y);
        lib::L2CValue::L2CValue((L2CValue *)(auStack384 + 0x10),_LINK_NO_ARTICLE);
        lib::L2CValue::L2CValue((L2CValue *)auStack384,true);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack352);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)(auStack384 + 0x10));
        lib::L2CAgent::push_lua_stack(param_2,aLStack112);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack384);
        app::FL_sv_module_access::link(param_2->luaStateAgent);
        lib::L2CAgent::pop_lua_stack(param_2,1);
        lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)auStack384);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack352);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack352,_FL_MA_MSC_LINK_GET_PARENT_MODEL_NODE_GLOBAL_POSITION_Z);
        lib::L2CValue::L2CValue((L2CValue *)(auStack384 + 0x10),_LINK_NO_ARTICLE);
        lib::L2CValue::L2CValue((L2CValue *)auStack384,true);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack352);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)(auStack384 + 0x10));
        lib::L2CAgent::push_lua_stack(param_2,aLStack112);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack384);
        app::FL_sv_module_access::link(param_2->luaStateAgent);
        lib::L2CAgent::pop_lua_stack(param_2,1);
        lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)auStack384);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack352);
        fVar12 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar11);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
        lib::L2CValue::operator=(aLStack208,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        fVar12 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar11);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
        lib::L2CValue::operator=(aLStack288,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        fVar12 = (float)app::lua_bind::PostureModule__pos_z_impl(*ppBVar11);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
        lib::L2CValue::operator=(aLStack256,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::operator-(aLStack224,aLStack208);
        lib::L2CValue::operator=(aLStack272,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::operator-(aLStack160,aLStack288);
        lib::L2CValue::operator=(aLStack240,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::operator-(aLStack128,aLStack256);
        lib::L2CValue::operator=(aLStack304,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        fVar12 = (float)lib::L2CValue::as_number(aLStack272);
        fVar13 = (float)lib::L2CValue::as_number(aLStack240);
        fVar14 = (float)lib::L2CValue::as_number(aLStack304);
        fVar12 = (float)app::sv_math::vec3_length(fVar12,fVar13,fVar14);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
        lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,9.0);
        lib::L2CValue::operator=(aLStack192,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        uVar6 = lib::L2CValue::operator<=(aLStack176,aLStack192);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_MA_MSC_LINK_SEND_EVENT_PARENTS);
          lib::L2CValue::L2CValue((L2CValue *)auStack352,_LINK_NO_ARTICLE);
          lib::L2CValue::L2CValue((L2CValue *)(auStack384 + 0x10),0x170db96f9c);
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack384,_WN_LINK_BOOMERANG_TURN_WORK_INT_LINK_EVENT_RESULT_01);
          lib::L2CValue::L2CValue
                    (aLStack416,_WN_LINK_BOOMERANG_TURN_WORK_FLOAT_LINK_EVENT_RESULT_01);
          lib::L2CValue::L2CValue(aLStack432,_WN_LINK_BOOMERANG_TURN_WORK_FLAG_LINK_EVENT_RESULT_01)
          ;
          lib::L2CAgent::clear_lua_stack(param_2);
          lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
          lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack352);
          lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)(auStack384 + 0x10));
          lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack384);
          lib::L2CAgent::push_lua_stack(param_2,aLStack416);
          lib::L2CAgent::push_lua_stack(param_2,aLStack432);
          app::sv_module_access::link(param_2->luaStateAgent);
          lib::L2CAgent::pop_lua_stack(param_2,1);
          lib::L2CValue::~L2CValue(aLStack400);
          lib::L2CValue::~L2CValue(aLStack432);
          lib::L2CValue::~L2CValue(aLStack416);
          lib::L2CValue::~L2CValue((L2CValue *)auStack384);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
          lib::L2CValue::~L2CValue((L2CValue *)auStack352);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack352,_WN_LINK_BOOMERANG_TURN_WORK_FLAG_LINK_EVENT_RESULT_01);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack352);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
          lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)auStack352);
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0x199c462b5d);
            lib::L2CAgent::clear_lua_stack(param_2);
            lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
            app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
            lib::L2CAgent::pop_lua_stack(param_2,1);
            lib::L2CValue::~L2CValue(aLStack480);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue(param_1,1);
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)auStack352,0.0);
            lib::L2CValue::L2CValue((L2CValue *)(auStack384 + 0x10),0.0);
            lib::L2CValue::L2CValue((L2CValue *)auStack384,0.0);
            lib::L2CValue::L2CValue(aLStack416,_WN_LINK_BOOMERANG_POSTURE_ROT_NODE_TOPN);
            uVar6 = lib::L2CValue::as_number((L2CValue *)auStack352);
            lVar15 = lib::L2CValue::as_number((L2CValue *)(auStack384 + 0x10));
            uVar4 = lib::L2CValue::as_number((L2CValue *)auStack384);
            local_60 = uVar6 & 0xffffffff | lVar15 << 0x20;
            uStack88 = (ulong)uVar4;
            iVar3 = lib::L2CValue::as_integer(aLStack416);
            app::lua_bind::PostureModule__set_rot_impl(*ppBVar11,(Vector3f *)&local_60,iVar3);
            lib::L2CValue::~L2CValue(aLStack416);
            lib::L2CValue::~L2CValue((L2CValue *)auStack384);
            lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
            lib::L2CValue::~L2CValue((L2CValue *)auStack352);
            lib::L2CValue::L2CValue((L2CValue *)auStack352,0.0);
            lib::L2CValue::L2CValue((L2CValue *)(auStack384 + 0x10),0.0);
            lib::L2CValue::L2CValue((L2CValue *)auStack384,0.0);
            lib::L2CValue::L2CValue(aLStack416,_WN_LINK_BOOMERANG_POSTURE_ROT_NODE_ROTN);
            uVar6 = lib::L2CValue::as_number((L2CValue *)auStack352);
            lVar15 = lib::L2CValue::as_number((L2CValue *)(auStack384 + 0x10));
            uVar4 = lib::L2CValue::as_number((L2CValue *)auStack384);
            local_60 = uVar6 & 0xffffffff | lVar15 << 0x20;
            uStack88 = (ulong)uVar4;
            iVar3 = lib::L2CValue::as_integer(aLStack416);
            app::lua_bind::PostureModule__set_rot_impl(*ppBVar11,(Vector3f *)&local_60,iVar3);
            lib::L2CValue::~L2CValue(aLStack416);
            lib::L2CValue::~L2CValue((L2CValue *)auStack384);
            lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
            lib::L2CValue::~L2CValue((L2CValue *)auStack352);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
            lib::L2CValue::L2CValue
                      ((L2CValue *)auStack352,_WN_LINK_BOOMERANG_INSTANCE_WORK_ID_FLOAT_ANGLE);
            fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack352);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
            lib::L2CValue::~L2CValue((L2CValue *)auStack352);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue(aLStack448,_WN_LINK_BOOMERANG_STATUS_KIND_HAVED);
            lib::L2CValue::L2CValue(aLStack464,false);
            lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x40,(L2CValue)0x30);
            lib::L2CValue::~L2CValue(aLStack464);
            lib::L2CValue::~L2CValue(aLStack448);
            lib::L2CValue::L2CValue(param_1,1);
          }
          goto LAB_710002707c;
        }
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_GROUND_CORRECT_KIND_NONE);
    uVar6 = lib::L2CValue::operator==(aLStack320,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)(auStack384 + 0x10),_LINK_NO_ARTICLE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack384 + 0x10));
      uVar4 = app::lua_bind::LinkModule__get_parent_id_impl(*ppBVar11,iVar3,true);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,uVar4);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar7 == (void *)0x0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack352,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)auStack352,pvVar7);
      }
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack352);
      fVar12 = (float)app::lua_bind::PostureModule__pos_y_impl(pBVar8);
      lib::L2CValue::L2CValue((L2CValue *)(auStack384 + 0x10),fVar12);
      fVar12 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack416,fVar12);
      pLVar10 = aLStack416;
      lib::L2CValue::operator-((L2CValue *)(auStack384 + 0x10),pLVar10);
      lib::L2CAgent::math_abs((L2CAgent *)auStack384,pLVar10);
      lib::L2CValue::operator=(aLStack240,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)auStack384);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::L2CValue(aLStack432,0xf39cee014);
      lib::L2CValue::L2CValue(aLStack496,0x1cb25d4dc6);
      uVar6 = lib::L2CValue::as_integer(aLStack432);
      uVar9 = lib::L2CValue::as_integer(aLStack496);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar9);
      lib::L2CValue::L2CValue(aLStack416,fVar12);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,10.0);
      lib::L2CValue::operator*(aLStack416,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      uVar6 = lib::L2CValue::operator<=((L2CValue *)auStack384,aLStack240);
      lib::L2CValue::~L2CValue((L2CValue *)auStack384);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack496);
      lib::L2CValue::~L2CValue(aLStack432);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_GROUND_CORRECT_KIND_NONE);
        GVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        app::lua_bind::GroundModule__set_correct_impl(*ppBVar11,GVar5);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_GROUND_CORRECT_KIND_NONE);
        lib::L2CValue::operator=(aLStack320,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      }
      lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack352);
    }
    lib::L2CValue::~L2CValue(aLStack336);
  }
  lib::L2CValue::L2CValue(aLStack336);
  lib::L2CValue::L2CValue((L2CValue *)auStack352,_WN_LINK_BOOMERANG_INSTANCE_WORK_ID_FLAG_FLICK);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack352);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)auStack352);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack352,0xf39cee014);
    lib::L2CValue::L2CValue((L2CValue *)(auStack384 + 0x10),0x9fc84e15a);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack352);
    uVar9 = lib::L2CValue::as_integer((L2CValue *)(auStack384 + 0x10));
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
    lib::L2CValue::operator=(aLStack336,(L2CValue *)&local_60);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)auStack352,0xf39cee014);
    lib::L2CValue::L2CValue((L2CValue *)(auStack384 + 0x10),0xf9e6acfea);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack352);
    uVar9 = lib::L2CValue::as_integer((L2CValue *)(auStack384 + 0x10));
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
    lib::L2CValue::operator=(aLStack336,(L2CValue *)&local_60);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack352);
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack384 + 0x10),_WN_LINK_BOOMERANG_INSTANCE_WORK_ID_FLOAT_TURN_DIST);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack384 + 0x10));
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack352,fVar12);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,10.0);
  lib::L2CValue::operator*(aLStack336,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  uVar6 = lib::L2CValue::operator<=((L2CValue *)auStack384,(L2CValue *)auStack352);
  lib::L2CValue::~L2CValue((L2CValue *)auStack384);
  lib::L2CValue::~L2CValue((L2CValue *)auStack352);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
    app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
    lib::L2CValue::~L2CValue(aLStack512);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(param_1,1);
    goto LAB_710002707c;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_GROUND_CORRECT_KIND_NONE);
  uVar6 = lib::L2CValue::operator==(aLStack320,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar6 & 1) == 0) {
    bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar11);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    uVar6 = lib::L2CValue::operator==((L2CValue *)auStack352,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) == 0) {
      this = auStack352;
LAB_7100026fc8:
      lib::L2CValue::~L2CValue((L2CValue *)this);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)(auStack384 + 0x10),_GROUND_TOUCH_FLAG_SIDE);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack384 + 0x10));
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack352);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_GROUND_CORRECT_KIND_NONE);
        GVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        app::lua_bind::GroundModule__set_correct_impl(*ppBVar11,GVar5);
        this = &local_60;
        goto LAB_7100026fc8;
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack352,GROUND_TOUCH_FLAG_DOWN | _GROUND_TOUCH_FLAG_UP);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack352);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)auStack352);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x18b78d41a0);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack528);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
LAB_710002707c:
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

